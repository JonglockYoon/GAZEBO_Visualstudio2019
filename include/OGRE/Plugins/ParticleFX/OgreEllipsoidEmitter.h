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
// Original author: Tels <http://bloodgate.com>, released as public domain
#ifndef __EllipsoidEmitter_H__
#define __EllipsoidEmitter_H__

#include "OgreParticleFXPrerequisites.h"
#include "OgreAreaEmitter.h"

namespace Ogre {

    /** Particle emitter which emits particles randomly from points inside an ellipsoid.
    @remarks
        This basic particle emitter emits particles from a ellipsoid area.
        The initial direction of these particles can either be a single
        direction (i.e. a line), a random scattering inside a cone, or a random
        scattering in all directions, depending the 'angle' parameter, which
        is the angle across which to scatter the particles either side of the
        base direction of the emitter. 
    */
    class _OgreParticleFXExport EllipsoidEmitter : public AreaEmitter
    {
    public:
<<<<<<< HEAD
        /** See AreaEmitter. */
=======
        // See AreaEmitter

>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        EllipsoidEmitter(ParticleSystem* psys);

        /** See ParticleEmitter. */
        void _initParticle(Particle* pParticle);
<<<<<<< HEAD
=======

    protected:
        

>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
    };

}

#endif

