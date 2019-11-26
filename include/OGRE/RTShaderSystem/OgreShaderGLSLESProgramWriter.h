/*
-----------------------------------------------------------------------------
This source file is part of OGRE
(Object-oriented Graphics Rendering Engine)
For the latest info, see http://www.ogre3d.org

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
#ifndef _ShaderProgramWriterGLSLES_
#define _ShaderProgramWriterGLSLES_

#include "OgreShaderProgramWriterManager.h"

namespace Ogre {
namespace RTShader {

/** \addtogroup Core
*  @{
*/
/** \addtogroup RTShader
*  @{
*/

/** GLSL ES target language writer implementation.
@see ProgramWriter.
*/
class GLSLESProgramWriter : public ProgramWriter
{
	// Interface.
public:

	/** Class constructor. 
<<<<<<< HEAD
	*/
	GLSLESProgramWriter	();

	/** Class destructor */
	virtual ~GLSLESProgramWriter	();
=======
	@param language The target shader language.
	*/
	GLSLESProgramWriter();

	/** Class destructor */
	virtual ~GLSLESProgramWriter();
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14


	/** 
	@see ProgramWriter::writeSourceCode.
	*/
<<<<<<< HEAD
	virtual void            writeSourceCode			(std::ostream& os, Program* program);
=======
#if OGRE_PLATFORM == OGRE_PLATFORM_ANDROID
	virtual void writeSourceCode(StringSerialiser& os, Program* program);
#else
	virtual void writeSourceCode(std::ostream& os, Program* program);
#endif
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

	/** 
	@see ProgramWriter::getTargetLanguage.
	*/
<<<<<<< HEAD
	virtual const String&   getTargetLanguage		() const { return TargetLanguage; }
=======
	virtual const String& getTargetLanguage() const { return TargetLanguage; }
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

	static String TargetLanguage;

    protected:
<<<<<<< HEAD
	typedef		map<GpuConstantType, const char*>::type		GpuConstTypeToStringMap;
	typedef		map<Parameter::Semantic, const char*>::type	ParamSemanticToStringMap;
	typedef		map<Parameter::Content, const char*>	::type  ParamContentToStringMap;
	typedef		map<String, String>::type					StringMap;
	typedef		map<FunctionInvocation, String>::type		FunctionMap;
	typedef		vector<FunctionInvocation>::type            FunctionVector;
    typedef     FunctionMap::const_iterator                 FunctionMapIterator;
    typedef     FunctionVector::const_iterator              FunctionVectorIterator;
    typedef     GpuConstTypeToStringMap::const_iterator     GpuConstTypeToStringMapIterator;
=======
	typedef	std::map<GpuConstantType, const char*>		GpuConstTypeToStringMap;
	typedef	std::map<Parameter::Semantic, const char*>	ParamSemanticToStringMap;
	typedef	std::map<Parameter::Content, const char*>	ParamContentToStringMap;
	typedef	std::map<String, String>					StringMap;
	typedef	std::map<FunctionInvocation, String>		FunctionMap;
	typedef	std::vector<FunctionInvocation>             FunctionVector;
    typedef FunctionMap::const_iterator                 FunctionMapIterator;
    typedef FunctionVector::const_iterator              FunctionVectorIterator;
    typedef GpuConstTypeToStringMap::const_iterator     GpuConstTypeToStringMapIterator;
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

	// Protected methods.
protected:

	/** Initialize string maps. */
<<<<<<< HEAD
	void				initializeStringMaps		();

    /** Cache functions of a dependency */
    virtual void        cacheDependencyFunctions(const String & libName);
=======
	void initializeStringMaps();

    /** Cache functions of a dependency */
    virtual void cacheDependencyFunctions(const String & libName);
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14


    /** Create a FunctionInvocation object from a string taken out of a shader library. */
	FunctionInvocation	*createInvocationFromString	(const String & input);

    /** Write the program dependencies. */
<<<<<<< HEAD
	void                writeProgramDependencies	(std::ostream& os, Program* program);

	/** Write a local parameter. */
	void				writeLocalParameter			(std::ostream& os, ParameterPtr parameter);

	/** Write the input params of the function */
	void				writeInputParameters		(std::ostream& os, Function* function, GpuProgramType gpuType);
	
	/** Write the output params of the function */
	void				writeOutParameters			(std::ostream& os, Function* function, GpuProgramType gpuType);
=======
#if OGRE_PLATFORM == OGRE_PLATFORM_ANDROID
	void writeProgramDependencies(StringSerialiser& os, Program* program);
#else
	void writeProgramDependencies(std::ostream& os, Program* program);
#endif

	/** Write a local parameter. */
#if OGRE_PLATFORM == OGRE_PLATFORM_ANDROID
	void writeLocalParameter(StringSerialiser& os, ParameterPtr parameter);
#else
	void writeLocalParameter(std::ostream& os, ParameterPtr parameter);
#endif

	/** Write the input params of the function */
#if OGRE_PLATFORM == OGRE_PLATFORM_ANDROID
	void writeInputParameters(StringSerialiser& os, Function* function, GpuProgramType gpuType);
#else
	void writeInputParameters(std::ostream& os, Function* function, GpuProgramType gpuType);
#endif
	
	/** Write the output params of the function */
#if OGRE_PLATFORM == OGRE_PLATFORM_ANDROID
	void writeOutParameters(StringSerialiser& os, Function* function, GpuProgramType gpuType);
#else
	void writeOutParameters(std::ostream& os, Function* function, GpuProgramType gpuType);
#endif

#if OGRE_PLATFORM == OGRE_PLATFORM_ANDROID
	void writeAssignFunction(StringSerialiser& os, FunctionInvocation::OperandVector::iterator itOperand, FunctionInvocation::OperandVector::iterator itOperandEnd, GpuProgramType gpuType);
#else
	void writeAssignFunction(std::stringstream& os, FunctionInvocation::OperandVector::iterator itOperand, FunctionInvocation::OperandVector::iterator itOperandEnd, GpuProgramType gpuType);
#endif
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

	String processOperand(Operand op, GpuProgramType gpuType);
	
    /** Check if a string matches one of the GLSL ES basic types */
<<<<<<< HEAD
    bool                isBasicType(String &type);
    
    /** Search within a function body for non-builtin functions that a given function invocation depends on. */
    void                discoverFunctionDependencies(const FunctionInvocation &invoc, FunctionVector &depVector);

	// Attributes.
protected:
	GpuConstTypeToStringMap		mGpuConstTypeMap;				// Map between GPU constant type to string value.
	ParamSemanticToStringMap	mParamSemanticMap;				// Map between parameter semantic to string value.

	StringMap					mInputToGLStatesMap;			// Map parameter name to a new parameter name (sometimes renaming is required to match names between vertex and fragment shader)
	FunctionMap                 mFunctionCacheMap;              // Map function invocation to body.  Used as a cache to reduce library file reads and for inlining
    StringMap                   mDefinesMap;                    // Map of #defines and the function library that contains them
	ParamContentToStringMap		mContentToPerVertexAttributes;	// Map parameter content to vertex attributes
	int							mGLSLVersion;					// Holds the current glsl es version
	StringVector				mFragInputParams;				// Holds the fragment input params 
    StringMap                   mCachedFunctionLibraries;       // Holds the cached function libraries
=======
    bool isBasicType(String &type);
    
    /** Search within a function body for non-builtin functions that a given function invocation depends on. */
    void discoverFunctionDependencies(const FunctionInvocation &invoc, FunctionVector &depVector);

	// Attributes.
protected:
	// Map between GPU constant type to string value.
	GpuConstTypeToStringMap mGpuConstTypeMap;
	// Map between parameter semantic to string value.
	ParamSemanticToStringMap mParamSemanticMap;

	// Map parameter name to a new parameter name (sometimes renaming is required to match names between vertex and fragment shader)
	StringMap mInputToGLStatesMap;
	// Map function invocation to body.  Used as a cache to reduce library file reads and for inlining
	FunctionMap mFunctionCacheMap;
    // Map of #defines and the function library that contains them
    StringMap mDefinesMap;
	// Map parameter content to vertex attributes
	ParamContentToStringMap mContentToPerVertexAttributes;
	// Holds the current glsl es version
	int mGLSLVersion;
	// Holds the fragment input params 
	StringVector mFragInputParams;
    // Holds the cached function libraries
    StringMap mCachedFunctionLibraries;
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
};

/** GLSL ES program writer factory implementation.
@see ProgramWriterFactory
*/
class ShaderProgramWriterGLSLESFactory : public ProgramWriterFactory
{
public:
<<<<<<< HEAD
	ShaderProgramWriterGLSLESFactory() : mLanguage("glsles")
	{
=======
	ShaderProgramWriterGLSLESFactory()
	{
		mLanguage = "glsles";
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
	}
	virtual ~ShaderProgramWriterGLSLESFactory() {}

	/** 
	@see ProgramWriterFactory::getTargetLanguage
	*/
	virtual const String& getTargetLanguage(void) const
	{
		return mLanguage;
	}

	/** 
	@see ProgramWriterFactory::create
	*/
	virtual ProgramWriter* create(void)
	{
		return OGRE_NEW GLSLESProgramWriter();
	}

private:
	String mLanguage;
};

/** @} */
/** @} */

}
}

#endif
