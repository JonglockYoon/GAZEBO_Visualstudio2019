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
#ifndef _FactoryObj_H__
#define _FactoryObj_H__

#include "OgrePrerequisites.h"

namespace Ogre {

<<<<<<< HEAD
    /** \addtogroup Core
    *  @{
    */
    /** \addtogroup General
    *  @{
    */
    /** Abstract factory class. Does nothing by itself, but derived classes can add
=======
	/** \addtogroup Core
	*  @{
	*/
	/** \addtogroup General
	*  @{
	*/
	/** Abstract factory class. Does nothing by itself, but derived classes can add
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        functionality.
    */
    template< typename T > class FactoryObj
    {
    public:
        virtual ~FactoryObj() {}

        /** Returns the factory type.
<<<<<<< HEAD
        @return
            The factory type.
=======
            @return
                The factory type.
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        */
        virtual const String& getType() const = 0;

        /** Creates a new object.
        @param name Name of the object to create
        @return
            An object created by the factory. The type of the object depends on
            the factory.
        */
<<<<<<< HEAD
        virtual T* createInstance(const String& name) = 0;
        /** Destroys an object which was created by this factory.
        @param ptr Pointer to the object to destroy
        */
        virtual void destroyInstance(T* ptr) = 0;
    };

    /** @} */
    /** @} */
} // namespace Ogre

#endif // _FactoryObj_H__
=======
        virtual T* createInstance( const String& name ) = 0;    
        /** Destroys an object which was created by this factory.
        @param ptr Pointer to the object to destroy
        */
        virtual void destroyInstance( T* ) = 0;    
    };

	/** @} */
	/** @} */
} // namespace

#endif
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
