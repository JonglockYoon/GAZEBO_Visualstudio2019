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
#ifndef __ShadowCaster_H__
#define __ShadowCaster_H__

#include "OgrePrerequisites.h"
#include "OgreRenderable.h"
<<<<<<< HEAD
#include "OgreHeaderPrefix.h"
=======
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14


namespace Ogre {

<<<<<<< HEAD
    /** \addtogroup Core
    *  @{
    */
    /** \addtogroup Scene
    *  @{
    */
    /** Class which represents the renderable aspects of a set of shadow volume faces. 
=======

	/** \addtogroup Core
	*  @{
	*/
	/** \addtogroup Scene
	*  @{
	*/
	/** Class which represents the renderable aspects of a set of shadow volume faces. 
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
    @remarks
        Note that for casters comprised of more than one set of vertex buffers (e.g. SubMeshes each
        using their own geometry), it will take more than one ShadowRenderable to render the 
        shadow volume. Therefore for shadow caster geometry, it is best to stick to one set of
        vertex buffers (not necessarily one buffer, but the positions for the entire geometry 
        should come from one buffer if possible)
    */
    class _OgreExport ShadowRenderable : public Renderable, public ShadowDataAlloc
    {
    protected:
        MaterialPtr mMaterial;
        RenderOperation mRenderOp;
<<<<<<< HEAD
        ShadowRenderable* mLightCap; /// Used only if isLightCapSeparate == true
=======
        ShadowRenderable* mLightCap; // used only if isLightCapSeparate == true
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
    public:
        ShadowRenderable() : mMaterial(), mLightCap(0) {}
        virtual ~ShadowRenderable() { delete mLightCap; }
        /** Set the material to be used by the shadow, should be set by the caller 
<<<<<<< HEAD
            before adding to a render queue
        */
        void setMaterial(const MaterialPtr& mat) { mMaterial = mat; }
        /// @copydoc Renderable::getMaterial
        const MaterialPtr& getMaterial(void) const { return mMaterial; }
        /// @copydoc Renderable::getRenderOperation
        void getRenderOperation(RenderOperation& op) { op = mRenderOp; }
        /// Get the internal render operation for set up.
        RenderOperation* getRenderOperationForUpdate(void) {return &mRenderOp;}
        /// @copydoc Renderable::getWorldTransforms
        void getWorldTransforms(Matrix4* xform) const = 0;
        /// @copydoc Renderable::getSquaredViewDepth
        Real getSquaredViewDepth(const Camera*) const{ return 0; /* not used */}
        /// @copydoc Renderable::getLights.
=======
          before adding to a render queue
        */
        void setMaterial(const MaterialPtr& mat) { mMaterial = mat; }
        /// Overridden from Renderable
        const MaterialPtr& getMaterial(void) const { return mMaterial; }
        /// Overridden from Renderable
        void getRenderOperation(RenderOperation& op) { op = mRenderOp; }
        /// Get the internal render operation for set up
        RenderOperation* getRenderOperationForUpdate(void) {return &mRenderOp;}
        /// Overridden from Renderable
        void getWorldTransforms(Matrix4* xform) const = 0;
        /// Overridden from Renderable
        Real getSquaredViewDepth(const Camera*) const{ return 0; /* not used */}
        /// Overridden from Renderable
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        const LightList& getLights(void) const;
        /** Does this renderable require a separate light cap?
        @remarks
            If possible, the light cap (when required) should be contained in the
            usual geometry of the shadow renderable. However, if for some reason
            the normal depth function (less than) could cause artefacts, then a
            separate light cap with a depth function of 'always fail' can be used 
            instead. The primary example of this is when there are floating point
            inaccuracies caused by calculating the shadow geometry separately from
            the real geometry. 
        */
        bool isLightCapSeparate(void) const { return mLightCap != 0; }

<<<<<<< HEAD
        /// Get the light cap version of this renderable.
=======
        /// Get the light cap version of this renderable
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        ShadowRenderable* getLightCapRenderable(void) { return mLightCap; }
        /// Should this ShadowRenderable be treated as visible?
        virtual bool isVisible(void) const { return true; }

<<<<<<< HEAD
        /** This function informs the shadow renderable that the global index buffer
            from the SceneManager has been updated. As all shadow use this buffer their pointer 
            must be updated as well.
        @param indexBuffer
            Pointer to the new index buffer.
        */
        virtual void rebindIndexBuffer(const HardwareIndexBufferSharedPtr& indexBuffer) = 0;
=======
		/** This function informs the shadow renderable that the global index buffer
		from the SceneManager has been updated. As all shadow use this buffer their pointer 
		must be updated as well
		@indexBuffer pointer to the new index buffer
		*/
		virtual void rebindIndexBuffer(const HardwareIndexBufferSharedPtr& indexBuffer) = 0;
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14

    };

    /** A set of flags that can be used to influence ShadowRenderable creation. */
    enum ShadowRenderableFlags
    {
<<<<<<< HEAD
        /// For shadow volume techniques only, generate a light cap on the volume.
        SRF_INCLUDE_LIGHT_CAP = 0x00000001,
        /// For shadow volume techniques only, generate a dark cap on the volume.
        SRF_INCLUDE_DARK_CAP  = 0x00000002,
        /// For shadow volume techniques only, indicates volume is extruded to infinity.
=======
        /// For shadow volume techniques only, generate a light cap on the volume
        SRF_INCLUDE_LIGHT_CAP = 0x00000001,
        /// For shadow volume techniques only, generate a dark cap on the volume
        SRF_INCLUDE_DARK_CAP  = 0x00000002,
        /// For shadow volume techniques only, indicates volume is extruded to infinity
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        SRF_EXTRUDE_TO_INFINITY  = 0x00000004
    };

    /** This class defines the interface that must be implemented by shadow casters.
    */
    class _OgreExport ShadowCaster
    {
    public:
        virtual ~ShadowCaster() { }
        /** Returns whether or not this object currently casts a shadow. */
        virtual bool getCastShadows(void) const = 0;

        /** Returns details of the edges which might be used to determine a silhouette. */
        virtual EdgeData* getEdgeList(void) = 0;
<<<<<<< HEAD
        /** Returns whether the object has a valid edge list. */
        virtual bool hasEdgeList(void) = 0;

        /** Get the world bounding box of the caster. */
        virtual const AxisAlignedBox& getWorldBoundingBox(bool derive = false) const = 0;
        /** Gets the world space bounding box of the light cap. */
        virtual const AxisAlignedBox& getLightCapBounds(void) const = 0;
        /** Gets the world space bounding box of the dark cap, as extruded using the light provided. */
=======
		/** Returns whether the object has a valid edge list. */
		virtual bool hasEdgeList(void) = 0;

        /** Get the world bounding box of the caster. */
        virtual const AxisAlignedBox& getWorldBoundingBox(bool derive = false) const = 0;
        /** Gets the world space bounding box of the light cap */
        virtual const AxisAlignedBox& getLightCapBounds(void) const = 0;
        /** Gets the world space bounding box of the dark cap, as extruded using the light provided */
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        virtual const AxisAlignedBox& getDarkCapBounds(const Light& light, Real dirLightExtrusionDist) const = 0;

        typedef vector<ShadowRenderable*>::type ShadowRenderableList;
        typedef VectorIterator<ShadowRenderableList> ShadowRenderableListIterator;

        /** Gets an iterator over the renderables required to render the shadow volume. 
        @remarks
            Shadowable geometry should ideally be designed such that there is only one
            ShadowRenderable required to render the the shadow; however this is not a necessary
            limitation and it can be exceeded if required.
<<<<<<< HEAD
        @param shadowTechnique
            The technique being used to generate the shadow.
        @param light
            The light to generate the shadow from.
        @param indexBuffer
            The index buffer to build the renderables into, 
            the current contents are assumed to be disposable.
        @param extrudeVertices
            If @c true, this means this class should extrude
            the vertices of the back of the volume in software. If false, it
            will not be done (a vertex program is assumed).
        @param extrusionDistance
            The distance to extrude the shadow volume.
        @param flags
            Technique-specific flags, see ShadowRenderableFlags.
        */
        virtual ShadowRenderableListIterator getShadowVolumeRenderableIterator(
            ShadowTechnique shadowTechnique, const Light* light, 
            HardwareIndexBufferSharedPtr* indexBuffer, size_t* indexBufferUsedSize,
=======
        @param shadowTechnique The technique being used to generate the shadow
        @param light The light to generate the shadow from
        @param indexBuffer The index buffer to build the renderables into, 
            the current contents are assumed to be disposable.
        @param extrudeVertices If true, this means this class should extrude
            the vertices of the back of the volume in software. If false, it
            will not be done (a vertex program is assumed).
        @param extrusionDistance The distance to extrude the shadow volume
        @param flags Technique-specific flags, see ShadowRenderableFlags
        */
        virtual ShadowRenderableListIterator getShadowVolumeRenderableIterator(
            ShadowTechnique shadowTechnique, const Light* light, 
            HardwareIndexBufferSharedPtr* indexBuffer, 
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
            bool extrudeVertices, Real extrusionDistance, unsigned long flags = 0 ) = 0;

        /** Utility method for extruding vertices based on a light. 
        @remarks
            Unfortunately, because D3D cannot handle homogeneous (4D) position
            coordinates in the fixed-function pipeline (GL can, but we have to
            be cross-API), when we extrude in software we cannot extrude to 
            infinity the way we do in the vertex program (by setting w to
            0.0f). Therefore we extrude by a fixed distance, which may cause 
            some problems with larger scenes. Luckily better hardware (ie
            vertex programs) can fix this.
<<<<<<< HEAD
        @param vertexBuffer
            The vertex buffer containing ONLY xyz position
            values, which must be originalVertexCount * 2 * 3 floats long.
        @param originalVertexCount
            The count of the original number of
            vertices, i.e. the number in the mesh, not counting the doubling
            which has already been done (by VertexData::prepareForShadowVolume)
            to provide the extruded area of the buffer.
        @param lightPos
            4D light position in object space, when w=0.0f this
            represents a directional light.
        @param extrudeDist
            The distance to extrude.
        */
        static void extrudeVertices(const HardwareVertexBufferSharedPtr& vertexBuffer, 
            size_t originalVertexCount, const Vector4& lightPos, Real extrudeDist);
        /** Get the distance to extrude for a point/spot light. */
        virtual Real getPointExtrusionDistance(const Light* l) const = 0;
    protected:
        /// Helper method for calculating extrusion distance.
=======
        @param vertexBuffer The vertex buffer containing ONLY xyz position
        values, which must be originalVertexCount * 2 * 3 floats long.
        @param originalVertexCount The count of the original number of
        vertices, i.e. the number in the mesh, not counting the doubling
        which has already been done (by VertexData::prepareForShadowVolume)
        to provide the extruded area of the buffer.
        @param lightPos 4D light position in object space, when w=0.0f this
        represents a directional light
        @param extrudeDist The distance to extrude
        */
        static void extrudeVertices(const HardwareVertexBufferSharedPtr& vertexBuffer, 
            size_t originalVertexCount, const Vector4& lightPos, Real extrudeDist);
        /** Get the distance to extrude for a point/spot light */
        virtual Real getPointExtrusionDistance(const Light* l) const = 0;
    protected:
        /// Helper method for calculating extrusion distance
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        Real getExtrusionDistance(const Vector3& objectPos, const Light* light) const;
        /** Tells the caster to perform the tasks necessary to update the 
            edge data's light listing. Can be overridden if the subclass needs 
            to do additional things. 
<<<<<<< HEAD
        @param edgeData
            The edge information to update.
        @param lightPos
            4D vector representing the light, a directional light has w=0.0.
=======
        @param edgeData The edge information to update
        @param lightPos 4D vector representing the light, a directional light
            has w=0.0
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
       */
        virtual void updateEdgeListLightFacing(EdgeData* edgeData, 
            const Vector4& lightPos);

        /** Generates the indexes required to render a shadow volume into the 
            index buffer which is passed in, and updates shadow renderables
            to use it.
<<<<<<< HEAD
        @param edgeData
            The edge information to use.
        @param indexBuffer
            The buffer into which to write data into; current 
            contents are assumed to be discardable.
        @param indexBufferUsedSize
            If the rest of buffer is enough than it would be locked with
            HBL_NO_OVERWRITE semantic and indexBufferUsedSize would be increased,
            otherwise HBL_DISCARD would be used and indexBufferUsedSize would be reset.
        @param light
            The light, mainly for type info as silhouette calculations
            should already have been done in updateEdgeListLightFacing
        @param shadowRenderables
            A list of shadow renderables which has 
            already been constructed but will need populating with details of
            the index ranges to be used.
        @param flags
            Additional controller flags, see ShadowRenderableFlags.
        */
        virtual void generateShadowVolume(EdgeData* edgeData, 
            const HardwareIndexBufferSharedPtr& indexBuffer, size_t& indexBufferUsedSize,
            const Light* light, ShadowRenderableList& shadowRenderables, unsigned long flags);
        /** Utility method for extruding a bounding box. 
        @param box
            Original bounding box, will be updated in-place.
        @param lightPos
            4D light position in object space, when w=0.0f this
            represents a directional light.
        @param extrudeDist
            The distance to extrude.
=======
        @param edgeData The edge information to use
        @param indexBuffer The buffer into which to write data into; current 
            contents are assumed to be discardable.
        @param light The light, mainly for type info as silhouette calculations
            should already have been done in updateEdgeListLightFacing
        @param shadowRenderables A list of shadow renderables which has 
            already been constructed but will need populating with details of
            the index ranges to be used.
        @param flags Additional controller flags, see ShadowRenderableFlags
        */
        virtual void generateShadowVolume(EdgeData* edgeData, 
            const HardwareIndexBufferSharedPtr& indexBuffer, const Light* light,
            ShadowRenderableList& shadowRenderables, unsigned long flags);
        /** Utility method for extruding a bounding box. 
        @param box Original bounding box, will be updated in-place
        @param lightPos 4D light position in object space, when w=0.0f this
        represents a directional light
        @param extrudeDist The distance to extrude
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
        */
        virtual void extrudeBounds(AxisAlignedBox& box, const Vector4& lightPos, 
            Real extrudeDist) const;


    };
<<<<<<< HEAD
    /** @} */
    /** @} */
} // namespace Ogre
#include "OgreHeaderSuffix.h"

#endif // __ShadowCaster_H__
=======
	/** @} */
	/** @} */
}

#endif
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
