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
#ifndef __RenderObjectListener_H__
#define __RenderObjectListener_H__

#include "OgrePrerequisites.h"
#include "OgreRenderable.h"
#include "OgrePass.h"

namespace Ogre {

<<<<<<< HEAD
    class Pass;
    class Renderable;
=======
	class Pass;
	class Renderable;
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

    /** Abstract interface which classes must implement if they wish to receive
        events from the scene manager when single object is about to be rendered. 
    */
<<<<<<< HEAD
    class _OgreExport RenderObjectListener
    {
    public:
        virtual ~RenderObjectListener() {}
        /** Event raised when render single object started.
        @remarks
            This method is called by the SceneManager.
        @param rend
            The renderable that is going to be rendered.
        @param pass
            The pass which was set.
        @param source
            The auto parameter source used within this render call.
        @param pLightList
            The light list in use.
        @param suppressRenderStateChanges
            True if render state changes should be suppressed.
        */
        virtual void notifyRenderSingleObject(Renderable* rend, const Pass* pass, const AutoParamDataSource* source, 
            const LightList* pLightList, bool suppressRenderStateChanges) = 0;
    };

} // namespace Ogre

#endif // __RenderObjectListener_H__
=======
	class _OgreExport RenderObjectListener
	{
	public:
		virtual ~RenderObjectListener() {}
		/** Event raised when render single object started.
		@remarks
		This method is called by the SceneManager.
		@param pass The renderable that is going to be rendered.
		@param pass The pass which was set.
		@param source The auto parameter source used within this render call.
		@pLightList The light list in use.
		@suppressRenderStateChanges True if render state changes should be suppressed.
		*/
		virtual void notifyRenderSingleObject(Renderable* rend, const Pass* pass, const AutoParamDataSource* source, 
			const LightList* pLightList, bool suppressRenderStateChanges) = 0;
	};


}

#endif
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

