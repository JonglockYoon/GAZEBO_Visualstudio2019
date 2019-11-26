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
#ifndef __Pixel_Count_Lod_Strategy_H__
#define __Pixel_Count_Lod_Strategy_H__

#include "OgrePrerequisites.h"

#include "OgreLodStrategy.h"
#include "OgreSingleton.h"
#include "OgreNode.h"

namespace Ogre {

	/** \addtogroup Core
	*  @{
	*/
	/** \addtogroup LOD
	*  @{
	*/
<<<<<<< HEAD
	/** Abstract base class for level of detail strategy based on pixel count approximations from bounding sphere projection. */
    class _OgreExport PixelCountLodStrategy : public LodStrategy
    {
    protected:
        /// @copydoc LodStrategy::getValueImpl
        virtual Real getValueImpl(const MovableObject *movableObject, const Camera *camera) const = 0;

    public:
        /** Default constructor. */
        PixelCountLodStrategy(const String& name);
=======
	/** Level of detail strategy based on pixel count approximation from bounding sphere projection. */
    class _OgreExport PixelCountLodStrategy : public LodStrategy, public Singleton<PixelCountLodStrategy>
    {
    protected:
        /// @copydoc LodStrategy::getValueImpl
        virtual Real getValueImpl(const MovableObject *movableObject, const Camera *camera) const;

    public:
        /** Default constructor. */
        PixelCountLodStrategy();
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

        /// @copydoc LodStrategy::getBaseValue
        virtual Real getBaseValue() const;

        /// @copydoc LodStrategy::transformBias
        virtual Real transformBias(Real factor) const;

        /// @copydoc LodStrategy::getIndex
        virtual ushort getIndex(Real value, const Mesh::MeshLodUsageList& meshLodUsageList) const;

        /// @copydoc LodStrategy::getIndex
        virtual ushort getIndex(Real value, const Material::LodValueList& materialLodValueList) const;

        /// @copydoc LodStrategy::sort
        virtual void sort(Mesh::MeshLodUsageList& meshLodUsageList) const;

        /// @copydoc LodStrategy::isSorted
        virtual bool isSorted(const Mesh::LodValueList& values) const;
<<<<<<< HEAD
    };
	/** @} */
	/** @} */

    class _OgreExport AbsolutePixelCountLodStrategy : public PixelCountLodStrategy, public Singleton<AbsolutePixelCountLodStrategy>
    {
    public:
        /** Default constructor. */
        AbsolutePixelCountLodStrategy();

        /// @copydoc LodStrategy::getValueImpl
        Real getValueImpl(const MovableObject *movableObject, const Camera *camera) const;
=======
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

        /** Override standard Singleton retrieval.
        @remarks
        Why do we do this? Well, it's because the Singleton
        implementation is in a .h file, which means it gets compiled
        into anybody who includes it. This is needed for the
        Singleton template to work, but we actually only want it
        compiled into the implementation of the class based on the
        Singleton, not all of them. If we don't change this, we get
        link errors when trying to use the Singleton-based class from
        an outside dll.
        @par
        This method just delegates to the template version anyway,
        but the implementation stays in this single compilation unit,
        preventing link errors.
        */
<<<<<<< HEAD
        static AbsolutePixelCountLodStrategy& getSingleton(void);
=======
        static PixelCountLodStrategy& getSingleton(void);
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        /** Override standard Singleton retrieval.
        @remarks
        Why do we do this? Well, it's because the Singleton
        implementation is in a .h file, which means it gets compiled
        into anybody who includes it. This is needed for the
        Singleton template to work, but we actually only want it
        compiled into the implementation of the class based on the
        Singleton, not all of them. If we don't change this, we get
        link errors when trying to use the Singleton-based class from
        an outside dll.
        @par
        This method just delegates to the template version anyway,
        but the implementation stays in this single compilation unit,
        preventing link errors.
        */
<<<<<<< HEAD
        static AbsolutePixelCountLodStrategy* getSingletonPtr(void);
    };
    /** @} */
    /** @} */

    class _OgreExport ScreenRatioPixelCountLodStrategy : public PixelCountLodStrategy, public Singleton<ScreenRatioPixelCountLodStrategy>
    {
    public:
        /** Default constructor. */
        ScreenRatioPixelCountLodStrategy();

        /// @copydoc LodStrategy::getValueImpl
        Real getValueImpl(const MovableObject *movableObject, const Camera *camera) const;

        /** Override standard Singleton retrieval.
        @remarks
        Why do we do this? Well, it's because the Singleton
        implementation is in a .h file, which means it gets compiled
        into anybody who includes it. This is needed for the
        Singleton template to work, but we actually only want it
        compiled into the implementation of the class based on the
        Singleton, not all of them. If we don't change this, we get
        link errors when trying to use the Singleton-based class from
        an outside dll.
        @par
        This method just delegates to the template version anyway,
        but the implementation stays in this single compilation unit,
        preventing link errors.
        */
        static ScreenRatioPixelCountLodStrategy& getSingleton(void);
        /** Override standard Singleton retrieval.
        @remarks
        Why do we do this? Well, it's because the Singleton
        implementation is in a .h file, which means it gets compiled
        into anybody who includes it. This is needed for the
        Singleton template to work, but we actually only want it
        compiled into the implementation of the class based on the
        Singleton, not all of them. If we don't change this, we get
        link errors when trying to use the Singleton-based class from
        an outside dll.
        @par
        This method just delegates to the template version anyway,
        but the implementation stays in this single compilation unit,
        preventing link errors.
        */
        static ScreenRatioPixelCountLodStrategy* getSingletonPtr(void);
    };
    /** @} */
    /** @} */
=======
        static PixelCountLodStrategy* getSingletonPtr(void);

    };
	/** @} */
	/** @} */
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

} // namespace

#endif
