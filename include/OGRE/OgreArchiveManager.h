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
#ifndef _ArchiveManager_H__
#define _ArchiveManager_H__

#include "OgrePrerequisites.h"

#include "OgreResourceManager.h"
#include "OgreSingleton.h"
<<<<<<< HEAD
#include "OgreHeaderPrefix.h"
=======
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

namespace Ogre {

	/** \addtogroup Core
	*  @{
	*/
	/** \addtogroup Resources
	*  @{
	*/
    /** This class manages the available ArchiveFactory plugins. 
    */
    class _OgreExport ArchiveManager : public Singleton<ArchiveManager>, public ArchiveAlloc
    {
    protected:
        typedef map<String, ArchiveFactory*>::type ArchiveFactoryMap;
        /// Factories available to create archives, indexed by archive type (String identifier e.g. 'Zip')
        ArchiveFactoryMap mArchFactories;
        /// Currently loaded archives
        typedef map<String, Archive*>::type ArchiveMap;
        ArchiveMap mArchives;

    public:
        /** Default constructor - should never get called by a client app.
        */
        ArchiveManager();
        /** Default destructor.
        */
        virtual ~ArchiveManager();

        /** Opens an archive for file reading.
            @remarks
                The archives are created using class factories within
                extension libraries.
            @param filename
                The filename that will be opened
<<<<<<< HEAD
            @param archiveType
                The type of archive that this is. For example: "Zip".
=======
            @param refLibrary
                The library that contains the data-handling code
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
            @return
                If the function succeeds, a valid pointer to an Archive
                object is returned.
            @par
                If the function fails, an exception is thrown.
        */
<<<<<<< HEAD
        Archive* load( const String& filename, const String& archiveType, bool readOnly);
=======
        Archive* load( const String& filename, const String& archiveType);
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

		/** Unloads an archive.
		@remarks
			You must ensure that this archive is not being used before removing it.
		*/
		void unload(Archive* arch);
		/** Unloads an archive by name.
		@remarks
			You must ensure that this archive is not being used before removing it.
		*/
		void unload(const String& filename);
		typedef MapIterator<ArchiveMap> ArchiveMapIterator;
		/** Get an iterator over the Archives in this Manager. */
		ArchiveMapIterator getArchiveIterator(void);

        /** Adds a new ArchiveFactory to the list of available factories.
            @remarks
                Plugin developers who add new archive codecs need to call
                this after defining their ArchiveFactory subclass and
                Archive subclasses for their archive type.
        */
        void addArchiveFactory(ArchiveFactory* factory);
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
        static ArchiveManager& getSingleton(void);
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
        static ArchiveManager* getSingletonPtr(void);
    };
	/** @} */
	/** @} */

}

<<<<<<< HEAD
#include "OgreHeaderSuffix.h"

=======
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
#endif
