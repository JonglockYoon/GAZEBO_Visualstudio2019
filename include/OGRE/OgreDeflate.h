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
#ifndef __OGRE_DEFLATE_H__
#define __OGRE_DEFLATE_H__

<<<<<<< HEAD
#if OGRE_NO_ZIP_ARCHIVE == 0

#include "OgrePrerequisites.h"
#include "OgreDataStream.h"
#include "OgreHeaderPrefix.h"
=======
#include "OgrePrerequisites.h"
#include "OgreDataStream.h"

>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

/// forward decls
struct z_stream_s;
typedef struct z_stream_s z_stream;

namespace Ogre
{
	/** Stream which compresses / uncompresses data using the 'deflate' compression
		algorithm.
	@remarks
		This stream is designed to wrap another stream for the actual source / destination
		of the compressed data, it has no concrete source / data itself. The idea is
		that you pass uncompressed data through this stream, and the underlying
		stream reads/writes compressed data to the final source.
	@note
		This is an alternative to using a compressed archive since it is able to 
		compress & decompress regardless of the actual source of the stream.
		You should avoid using this with already compressed archives.
		Also note that this cannot be used as a read / write stream, only a read-only
		or write-only stream.
	*/
	class _OgreExport DeflateStream : public DataStream
	{
	protected:
		DataStreamPtr mCompressedStream;
		DataStreamPtr mTmpWriteStream;
		String mTempFileName;
		z_stream* mZStream;
		size_t mCurrentPos;
<<<<<<< HEAD
		size_t mAvailIn;
=======
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
		
		/// Cache for read data in case skipping around
		StaticCache<16 * OGRE_STREAM_TEMP_SIZE> mReadCache;
		
		/// Intermediate buffer for read / write
		unsigned char *mTmp;
		
		/// Whether the underlying stream is valid compressed data
		bool mIsCompressedValid;
		
<<<<<<< HEAD
		void init();
		void destroy();
		void compressFinal();

		size_t getAvailInForSinglePass();
=======
		
		void init();
		void destroy();
		void compressFinal();
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
	public:
		/** Constructor for creating unnamed stream wrapping another stream.
		 @param compressedStream The stream that this stream will use when reading / 
			writing compressed data. The access mode from this stream will be matched.
		 @param tmpFileName Path/Filename to be used for temporary storage of incoming data
<<<<<<< HEAD
		 @param avail_in Available data length to be uncompressed. With it we can uncompress
			DataStream partly.
		*/
        DeflateStream(const DataStreamPtr& compressedStream, const String& tmpFileName = "",
			size_t avail_in = 0);
=======
		*/
        DeflateStream(const DataStreamPtr& compressedStream, const String& tmpFileName = "");
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
		/** Constructor for creating named stream wrapping another stream.
		 @param name The name to give this stream
		 @param compressedStream The stream that this stream will use when reading / 
			writing compressed data. The access mode from this stream will be matched.
		 @param tmpFileName Path/Filename to be used for temporary storage of incoming data
<<<<<<< HEAD
		 @param avail_in Available data length to be uncompressed. With it we can uncompress
			DataStream partly.
		 */
		DeflateStream(const String& name, const DataStreamPtr& compressedStream, const String& tmpFileName="",
			size_t avail_in = 0);
=======
		 */
		DeflateStream(const String& name, const DataStreamPtr& compressedStream, const String& tmpFileName="");	
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
		
		~DeflateStream();
		
		/** Returns whether the compressed stream is valid deflated data.
		 @remarks
			If you pass this class a READ stream which is not compressed with the 
			deflate algorithm, this method returns false and all read commands
			will actually be executed as passthroughs as a fallback. 
		*/
		bool isCompressedStreamValid() const { return mIsCompressedValid; }
		
		/** @copydoc DataStream::read
		 */
		size_t read(void* buf, size_t count);
		
		/** @copydoc DataStream::write
		 */
		size_t write(const void* buf, size_t count);
				
		/** @copydoc DataStream::skip
		 */
		void skip(long count);
		
		/** @copydoc DataStream::seek
		 */
	    void seek( size_t pos );
		
		/** @copydoc DataStream::tell
		 */
		size_t tell(void) const;
		
		/** @copydoc DataStream::eof
		 */
	    bool eof(void) const;
		
        /** @copydoc DataStream::close
		 */
        void close(void);
		
	};
}

<<<<<<< HEAD
#include "OgreHeaderSuffix.h"

#endif

=======
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
#endif
