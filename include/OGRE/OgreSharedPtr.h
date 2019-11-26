/*
-----------------------------------------------------------------------------
This source file is part of OGRE
    (Object-oriented Graphics Rendering Engine)
For the latest info, see http://www.ogre3d.org/

<<<<<<< HEAD
Copyright (c) 2000-2014 Torus Knot Software Ltd
=======
Copyright (c) 2000-2012 Torus Knot Software Ltd
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
-----------------------------------------------------------------------------
*/
#ifndef __SharedPtr_H__
#define __SharedPtr_H__

#include "OgrePrerequisites.h"
<<<<<<< HEAD
#include "OgreAtomicScalar.h"
=======
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

namespace Ogre {
	/** \addtogroup Core
	*  @{
	*/
	/** \addtogroup General
	*  @{
	*/

	/// The method to use to free memory on destruction
	enum SharedPtrFreeMethod
	{
		/// Use OGRE_DELETE to free the memory
		SPFM_DELETE,
		/// Use OGRE_DELETE_T to free (only MEMCATEGORY_GENERAL supported)
		SPFM_DELETE_T,
		/// Use OGRE_FREE to free (only MEMCATEGORY_GENERAL supported)
<<<<<<< HEAD
		SPFM_FREE,
		/// Don`t free resource at all, lifetime controlled externally.
		SPFM_NONE
	};

    struct SharedPtrInfo {
        inline SharedPtrInfo() 
            : useCount(1)
        {}

        virtual ~SharedPtrInfo() {}

        AtomicScalar<unsigned>  useCount;
    };

	struct SharedPtrInfoNone : public SharedPtrInfo
	{
	};

	template <class T>
	class SharedPtrInfoDelete : public SharedPtrInfo
	{
        T* mObject;
    public:
        inline SharedPtrInfoDelete(T* o) : mObject(o) {}

		virtual ~SharedPtrInfoDelete()
		{
			OGRE_DELETE mObject;
		}
	};

	template <class T>
	class SharedPtrInfoDeleteT : public SharedPtrInfo
	{
        T* mObject;
    public:
        inline SharedPtrInfoDeleteT(T* o) : mObject(o) {}

		virtual ~SharedPtrInfoDeleteT()
		{
			OGRE_DELETE_T(mObject, T, MEMCATEGORY_GENERAL);
		}
	};

	template <class T>
	class SharedPtrInfoFree : public SharedPtrInfo
	{
        T* mObject;
    public:
        inline SharedPtrInfoFree(T* o) : mObject(o) {}        

		virtual ~SharedPtrInfoFree()
		{
			OGRE_FREE(mObject, MEMCATEGORY_GENERAL);
		}
	};


=======
		SPFM_FREE
	};

>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
	/** Reference-counted shared pointer, used for objects where implicit destruction is 
        required. 
    @remarks
        This is a standard shared pointer implementation which uses a reference 
        count to work out when to delete the object. 
	@par
		If OGRE_THREAD_SUPPORT is defined to be 1, use of this class is thread-safe.
    */
	template<class T> class SharedPtr
	{
<<<<<<< HEAD
        template<typename Y> friend class SharedPtr;
	protected:
        /* DO NOT ADD MEMBERS TO THIS CLASS!
         *
         * The average Ogre application has *thousands* of them. Every extra
         * member causes extra memory use in general, and causes extra padding
         * to be added to a multitude of structures. 
         *
         * Everything you need to do can be acomplished by creatively working 
         * with the SharedPtrInfo object.
         *
         * There is no reason for this object to ever have more than two members.
         */

		T*             pRep;
        SharedPtrInfo* pInfo;

        SharedPtr(T* rep, SharedPtrInfo* info) : pRep(rep), pInfo(info)
		{
		}

	public:
=======
	protected:
		T* pRep;
		unsigned int* pUseCount;
		SharedPtrFreeMethod useFreeMethod; // if we should use OGRE_FREE instead of OGRE_DELETE
	public:
		OGRE_AUTO_SHARED_MUTEX // public to allow external locking
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
		/** Constructor, does not initialise the SharedPtr.
			@remarks
				<b>Dangerous!</b> You have to call bind() before using the SharedPtr.
		*/
<<<<<<< HEAD
		SharedPtr() : pRep(0), pInfo(0)
        {}

    private:
        static SharedPtrInfo* createInfoForMethod(T* rep, SharedPtrFreeMethod method)
        {
            switch(method) {
                case SPFM_DELETE:   return OGRE_NEW_T(SharedPtrInfoDelete<T>,  MEMCATEGORY_GENERAL) (rep);
                case SPFM_DELETE_T: return OGRE_NEW_T(SharedPtrInfoDeleteT<T>, MEMCATEGORY_GENERAL) (rep);
                case SPFM_FREE:     return OGRE_NEW_T(SharedPtrInfoFree<T>,    MEMCATEGORY_GENERAL) (rep);
                case SPFM_NONE:     return OGRE_NEW_T(SharedPtrInfoNone,       MEMCATEGORY_GENERAL) ();
            }
            assert(!"Bad method");
            return 0;
        }
    public:

		/** Constructor.
		@param rep The pointer to take ownership of
		@param inFreeMethod The mechanism to use to free the pointer
		*/
        template< class Y>
		explicit SharedPtr(Y* rep, SharedPtrFreeMethod inFreeMethod = SPFM_DELETE) 
            : pRep(rep)
            , pInfo(rep ? createInfoForMethod(rep, inFreeMethod) : 0)
		{
		}

		SharedPtr(const SharedPtr& r)
            : pRep(r.pRep)
            , pInfo(r.pInfo)
		{
            if (pRep) 
            {
                ++pInfo->useCount;
            }
		}

		SharedPtr& operator=(const SharedPtr& r) {
			// One resource could have several non-controlling control blocks but only one controlling.
			assert(pRep != r.pRep || pInfo == r.pInfo || dynamic_cast<SharedPtrInfoNone*>(pInfo) || dynamic_cast<SharedPtrInfoNone*>(r.pInfo));
			if(pInfo == r.pInfo)
				return *this;

=======
		SharedPtr() : pRep(0), pUseCount(0), useFreeMethod(SPFM_DELETE)
        {
            OGRE_SET_AUTO_SHARED_MUTEX_NULL
        }

		/** Constructor.
		@param rep The pointer to take ownership of
		@param freeMode The mechanism to use to free the pointer
		*/
        template< class Y>
		explicit SharedPtr(Y* rep, SharedPtrFreeMethod inFreeMethod = SPFM_DELETE) 
			: pRep(rep)
			, pUseCount(rep ? OGRE_NEW_T(unsigned int, MEMCATEGORY_GENERAL)(1) : 0)
			, useFreeMethod(inFreeMethod)
		{
            OGRE_SET_AUTO_SHARED_MUTEX_NULL
			if (rep)
			{
				OGRE_NEW_AUTO_SHARED_MUTEX
			}
		}
		SharedPtr(const SharedPtr& r)
            : pRep(0), pUseCount(0), useFreeMethod(SPFM_DELETE)
		{
			// lock & copy other mutex pointer
            
            OGRE_SET_AUTO_SHARED_MUTEX_NULL
            OGRE_MUTEX_CONDITIONAL(r.OGRE_AUTO_MUTEX_NAME)
            {
			    OGRE_LOCK_MUTEX(*r.OGRE_AUTO_MUTEX_NAME)
			    OGRE_COPY_AUTO_SHARED_MUTEX(r.OGRE_AUTO_MUTEX_NAME)
			    pRep = r.pRep;
			    pUseCount = r.pUseCount; 
				useFreeMethod = r.useFreeMethod;
			    // Handle zero pointer gracefully to manage STL containers
			    if(pUseCount)
			    {
				    ++(*pUseCount); 
			    }
            }
		}
		SharedPtr& operator=(const SharedPtr& r) {
			if (pRep == r.pRep)
				return *this;
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
			// Swap current data into a local copy
			// this ensures we deal with rhs and this being dependent
			SharedPtr<T> tmp(r);
			swap(tmp);
			return *this;
		}
		
<<<<<<< HEAD
		/* For C++11 compilers, use enable_if to only expose functions when viable
         *
         * MSVC 2012 and earlier only claim conformance to C++98. This is fortunate,
         * because they don't support default template parameters
         */
#if __cplusplus >= 201103L
        template<class Y,
            class = typename std::enable_if<std::is_convertible<Y*, T*>::value>::type>
#else
        template<class Y>
#endif
        SharedPtr(const SharedPtr<Y>& r)
            : pRep(r.getPointer())
            , pInfo(r.pInfo)
		{
            if (pRep) 
            {
                ++pInfo->useCount;
            }
        }

		
#if __cplusplus >= 201103L
        template<class Y,
                 class = typename std::enable_if<std::is_assignable<T*, Y*>::value>::type>
#else
        template<class Y>
#endif
        SharedPtr& operator=(const SharedPtr<Y>& r)
        {
			// One resource could have several non-controlling control blocks but only one controlling.
			assert(pRep != r.pRep || pInfo == r.pInfo|| dynamic_cast<SharedPtrInfoNone*>(pInfo) || dynamic_cast<SharedPtrInfoNone*>(r.pInfo));
			if(pInfo == r.pInfo)
				return *this;

=======
		template< class Y>
		SharedPtr(const SharedPtr<Y>& r)
            : pRep(0), pUseCount(0), useFreeMethod(SPFM_DELETE)
		{
			// lock & copy other mutex pointer

            OGRE_SET_AUTO_SHARED_MUTEX_NULL
            OGRE_MUTEX_CONDITIONAL(r.OGRE_AUTO_MUTEX_NAME)
            {
			    OGRE_LOCK_MUTEX(*r.OGRE_AUTO_MUTEX_NAME)
			    OGRE_COPY_AUTO_SHARED_MUTEX(r.OGRE_AUTO_MUTEX_NAME)
			    pRep = r.getPointer();
			    pUseCount = r.useCountPointer();
				useFreeMethod = r.freeMethod();
			    // Handle zero pointer gracefully to manage STL containers
			    if(pUseCount)
			    {
				    ++(*pUseCount);
			    }
            }
		}
		template< class Y>
		SharedPtr& operator=(const SharedPtr<Y>& r) {
			if (pRep == r.getPointer())
				return *this;
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
			// Swap current data into a local copy
			// this ensures we deal with rhs and this being dependent
			SharedPtr<T> tmp(r);
			swap(tmp);
			return *this;
		}
<<<<<<< HEAD

		~SharedPtr() {
=======
		virtual ~SharedPtr() {
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
            release();
		}


<<<<<<< HEAD
        template<typename Y>
        inline SharedPtr<Y> staticCast() const
        {
            if(pRep) {
                ++pInfo->useCount;
				return SharedPtr<Y>(static_cast<Y*>(pRep), pInfo);
            } else return SharedPtr<Y>();
        }

        template<typename Y>
        inline SharedPtr<Y> dynamicCast() const
        {
            Y* rep = dynamic_cast<Y*>(pRep);
            if(rep) {
                ++pInfo->useCount;
				return SharedPtr<Y>(rep, pInfo);
            } else return SharedPtr<Y>();
        }

=======
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
		inline T& operator*() const { assert(pRep); return *pRep; }
		inline T* operator->() const { assert(pRep); return pRep; }
		inline T* get() const { return pRep; }

		/** Binds rep to the SharedPtr.
			@remarks
				Assumes that the SharedPtr is uninitialised!
<<<<<<< HEAD

            @warning
                The object must not be bound into a SharedPtr elsewhere
		*/
		void bind(T* rep, SharedPtrFreeMethod inFreeMethod = SPFM_DELETE) {
			assert(!pRep && !pInfo);
			pInfo = createInfoForMethod(rep, inFreeMethod);
			pRep = rep;
		}

		inline bool unique() const { assert(pInfo && pInfo->useCount.get()); return pInfo->useCount.get() == 1; }
		inline unsigned int useCount() const { assert(pInfo && pInfo->useCount.get()); return pInfo->useCount.get(); }
        inline void setUseCount(unsigned value) { assert(pInfo); pInfo->useCount = value; }

		inline T* getPointer() const { return pRep; }
=======
		*/
		void bind(T* rep, SharedPtrFreeMethod inFreeMethod = SPFM_DELETE) {
			assert(!pRep && !pUseCount);
            OGRE_NEW_AUTO_SHARED_MUTEX
			OGRE_LOCK_AUTO_SHARED_MUTEX
			pUseCount = OGRE_NEW_T(unsigned int, MEMCATEGORY_GENERAL)(1);
			pRep = rep;
			useFreeMethod = inFreeMethod;
		}

		inline bool unique() const { OGRE_LOCK_AUTO_SHARED_MUTEX assert(pUseCount); return *pUseCount == 1; }
		inline unsigned int useCount() const { OGRE_LOCK_AUTO_SHARED_MUTEX assert(pUseCount); return *pUseCount; }
		inline unsigned int* useCountPointer() const { return pUseCount; }

		inline T* getPointer() const { return pRep; }
		inline SharedPtrFreeMethod freeMethod() const { return useFreeMethod; }
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

		inline bool isNull(void) const { return pRep == 0; }

        inline void setNull(void) { 
			if (pRep)
			{
<<<<<<< HEAD
				release();
=======
				// can't scope lock mutex before release in case deleted
				release();
				pRep = 0;
				pUseCount = 0;
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
			}
        }

    protected:

        inline void release(void)
        {
<<<<<<< HEAD
            if (pRep)
            {
                assert(pInfo);
                if(--pInfo->useCount == 0)
                    destroy();
            }

            pRep = 0;
            pInfo = 0;
        }

        /** IF YOU GET A CRASH HERE, YOU FORGOT TO FREE UP POINTERS
         BEFORE SHUTTING OGRE DOWN
         Use setNull() before shutdown or make sure your pointer goes
         out of scope before OGRE shuts down to avoid this. */
        inline void destroy(void)
        {
            assert(pRep && pInfo);
            OGRE_DELETE_T(pInfo, SharedPtrInfo, MEMCATEGORY_GENERAL);
        }

		inline void swap(SharedPtr<T> &other) 
		{
			std::swap(pRep, other.pRep);
			std::swap(pInfo, other.pInfo);
=======
			bool destroyThis = false;

            /* If the mutex is not initialized to a non-zero value, then
               neither is pUseCount nor pRep.
             */

            OGRE_MUTEX_CONDITIONAL(OGRE_AUTO_MUTEX_NAME)
			{
				// lock own mutex in limited scope (must unlock before destroy)
				OGRE_LOCK_AUTO_SHARED_MUTEX
				if (pUseCount)
				{
					if (--(*pUseCount) == 0) 
					{
						destroyThis = true;
	                }
				}
            }
			if (destroyThis)
				destroy();

            OGRE_SET_AUTO_SHARED_MUTEX_NULL
        }

        virtual void destroy(void)
        {
            // IF YOU GET A CRASH HERE, YOU FORGOT TO FREE UP POINTERS
            // BEFORE SHUTTING OGRE DOWN
            // Use setNull() before shutdown or make sure your pointer goes
            // out of scope before OGRE shuts down to avoid this.
			switch(useFreeMethod)
			{
			case SPFM_DELETE:
				OGRE_DELETE pRep;
				break;
			case SPFM_DELETE_T:
				OGRE_DELETE_T(pRep, T, MEMCATEGORY_GENERAL);
				break;
			case SPFM_FREE:
				OGRE_FREE(pRep, MEMCATEGORY_GENERAL);
				break;
			};
			// use OGRE_FREE instead of OGRE_DELETE_T since 'unsigned int' isn't a destructor
			// we only used OGRE_NEW_T to be able to use constructor
            OGRE_FREE(pUseCount, MEMCATEGORY_GENERAL);
			OGRE_DELETE_AUTO_SHARED_MUTEX
        }

		virtual void swap(SharedPtr<T> &other) 
		{
			std::swap(pRep, other.pRep);
			std::swap(pUseCount, other.pUseCount);
			std::swap(useFreeMethod, other.useFreeMethod);
#if OGRE_THREAD_SUPPORT
			std::swap(OGRE_AUTO_MUTEX_NAME, other.OGRE_AUTO_MUTEX_NAME);
#endif
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
		}
	};

	template<class T, class U> inline bool operator==(SharedPtr<T> const& a, SharedPtr<U> const& b)
	{
		return a.get() == b.get();
	}

	template<class T, class U> inline bool operator!=(SharedPtr<T> const& a, SharedPtr<U> const& b)
	{
		return a.get() != b.get();
	}

	template<class T, class U> inline bool operator<(SharedPtr<T> const& a, SharedPtr<U> const& b)
	{
		return std::less<const void*>()(a.get(), b.get());
	}
	/** @} */
	/** @} */
}



#endif
