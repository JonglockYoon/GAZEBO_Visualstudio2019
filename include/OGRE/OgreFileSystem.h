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
#ifndef __FileSystem_H__
#define __FileSystem_H__

#include "OgrePrerequisites.h"

#include "OgreArchive.h"
#include "OgreArchiveFactory.h"
<<<<<<< HEAD
#include "Threading/OgreThreadHeaders.h"
#include "OgreHeaderPrefix.h"

namespace Ogre {

    /** \addtogroup Core
    *  @{
    */
    /** \addtogroup Resources
    *  @{
    */
    /** Specialisation of the Archive class to allow reading of files from 
=======

namespace Ogre {

	/** \addtogroup Core
	*  @{
	*/
	/** \addtogroup Resources
	*  @{
	*/
	/** Specialisation of the Archive class to allow reading of files from 
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        filesystem folders / directories.
    */
    class _OgreExport FileSystemArchive : public Archive 
    {
    protected:
        /** Utility method to retrieve all files in a directory matching pattern.
<<<<<<< HEAD
        @param pattern
            File pattern.
        @param recursive
            Whether to cascade down directories.
        @param dirs
            Set to @c true if you want the directories to be listed instead of files.
        @param simpleList
            Populated if retrieving a simple list.
        @param detailList
            Populated if retrieving a detailed list.
=======
        @param pattern File pattern
        @param recursive Whether to cascade down directories
        @param dirs Set to true if you want the directories to be listed
            instead of files
        @param simpleList Populated if retrieving a simple list
        @param detailList Populated if retrieving a detailed list
        @param currentDir The current directory relative to the base of the 
            archive, for file naming
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        */
        void findFiles(const String& pattern, bool recursive, bool dirs,
            StringVector* simpleList, FileInfoList* detailList) const;

<<<<<<< HEAD
        OGRE_AUTO_MUTEX;
    public:
        FileSystemArchive(const String& name, const String& archType, bool readOnly );
=======
		OGRE_AUTO_MUTEX
    public:
        FileSystemArchive(const String& name, const String& archType );
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        ~FileSystemArchive();

        /// @copydoc Archive::isCaseSensitive
        bool isCaseSensitive(void) const;

        /// @copydoc Archive::load
        void load();
        /// @copydoc Archive::unload
        void unload();

        /// @copydoc Archive::open
        DataStreamPtr open(const String& filename, bool readOnly = true) const;

<<<<<<< HEAD
        /// @copydoc Archive::create
        DataStreamPtr create(const String& filename) const;

        /// @copydoc Archive::remove
        void remove(const String& filename) const;

        /// @copydoc Archive::list
=======
		/// @copydoc Archive::create
		DataStreamPtr create(const String& filename) const;

		/// @copydoc Archive::delete
		void remove(const String& filename) const;

		/// @copydoc Archive::list
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        StringVectorPtr list(bool recursive = true, bool dirs = false);

        /// @copydoc Archive::listFileInfo
        FileInfoListPtr listFileInfo(bool recursive = true, bool dirs = false);

        /// @copydoc Archive::find
        StringVectorPtr find(const String& pattern, bool recursive = true,
            bool dirs = false);

        /// @copydoc Archive::findFileInfo
        FileInfoListPtr findFileInfo(const String& pattern, bool recursive = true,
            bool dirs = false) const;

        /// @copydoc Archive::exists
        bool exists(const String& filename);

<<<<<<< HEAD
        /// @copydoc Archive::getModifiedTime
        time_t getModifiedTime(const String& filename);

        /// Set whether filesystem enumeration will include hidden files or not.
        /// This should be called prior to declaring and/or initializing filesystem
        /// resource locations. The default is true (ignore hidden files).
        static void setIgnoreHidden(bool ignore)
        {
            msIgnoreHidden = ignore;
        }

        /// Get whether hidden files are ignored during filesystem enumeration.
        static bool getIgnoreHidden()
        {
            return msIgnoreHidden;
        }

        static bool msIgnoreHidden;
    };

    /** Specialisation of ArchiveFactory for FileSystem files. */
=======
		/// @copydoc Archive::getModifiedTime
		time_t getModifiedTime(const String& filename);

		/// Set whether filesystem enumeration will include hidden files or not.
		/// This should be called prior to declaring and/or initializing filesystem
		/// resource locations. The default is true (ignore hidden files).
		static void setIgnoreHidden(bool ignore)
		{
			msIgnoreHidden = ignore;
		}

		/// Get whether hidden files are ignored during filesystem enumeration.
		static bool getIgnoreHidden()
		{
			return msIgnoreHidden;
		}

		static bool msIgnoreHidden;
    };

    /** Specialisation of ArchiveFactory for FileSystem files. */
    //class _OgrePrivate FileSystemArchiveFactory : public ArchiveFactory
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
    class _OgreExport FileSystemArchiveFactory : public ArchiveFactory
    {
    public:
        virtual ~FileSystemArchiveFactory() {}
        /// @copydoc FactoryObj::getType
        const String& getType(void) const;
        /// @copydoc FactoryObj::createInstance
<<<<<<< HEAD
        Archive *createInstance( const String& name, bool readOnly ) 
        {
            return OGRE_NEW FileSystemArchive(name, "FileSystem", readOnly);
        }
        /// @copydoc FactoryObj::destroyInstance
        void destroyInstance(Archive* ptr) { OGRE_DELETE ptr; }
    };

    /** @} */
    /** @} */

} // namespace Ogre

#include "OgreHeaderSuffix.h"

#endif // __FileSystem_H__
=======
        Archive *createInstance( const String& name ) 
        {
            return OGRE_NEW FileSystemArchive(name, "FileSystem");
        }
        /// @copydoc FactoryObj::destroyInstance
        void destroyInstance( Archive* arch) { delete arch; }
    };

	/** @} */
	/** @} */

}

#endif
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
