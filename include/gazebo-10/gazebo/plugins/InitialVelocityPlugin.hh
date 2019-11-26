/*
 * Copyright (C) 2014 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#ifndef GAZEBO_PLUGINS_INITIALVELOCITYPLUGIN_HH_
#define GAZEBO_PLUGINS_INITIALVELOCITYPLUGIN_HH_

#include <string>
#include <vector>

#include <sdf/sdf.hh>
#include "gazebo/common/Plugin.hh"
#include "gazebo/physics/PhysicsTypes.hh"

namespace gazebo
{
<<<<<<< HEAD
  class GZ_PLUGIN_VISIBLE InitialVelocityPlugin : public ModelPlugin
=======
  class GAZEBO_VISIBLE InitialVelocityPlugin : public ModelPlugin
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
  {
    /// \brief Constructor.
    public: InitialVelocityPlugin();

    /// \brief Destructor
    public: ~InitialVelocityPlugin();

    // Documentation Inherited.
    public: virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf);

    // Documentation Inherited.
    public: virtual void Reset();

    /// \brief Parent model.
    private: physics::ModelPtr model;

    /// \brief SDF for this plugin;
    private: sdf::ElementPtr sdf;
  };
}
// ifndef _INITIAL_VELOCITY_PLUGIN_HH_
#endif
