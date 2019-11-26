/*
 * Copyright (C) 2013 Open Source Robotics Foundation
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
#ifndef GAZEBO_PLUGINS_BREAKABLEJOINTPLUGIN_HH_
#define GAZEBO_PLUGINS_BREAKABLEJOINTPLUGIN_HH_

#include "gazebo/sensors/sensors.hh"
#include "gazebo/common/Plugin.hh"
#include "gazebo/common/Events.hh"
#include "gazebo/util/system.hh"

namespace gazebo
{
  /// \brief A plugin for breakable joints, based on a ForceTorque sensor plugin
<<<<<<< HEAD
  class GZ_PLUGIN_VISIBLE BreakableJointPlugin : public SensorPlugin
=======
  class GAZEBO_VISIBLE BreakableJointPlugin : public SensorPlugin
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
  {
    /// \brief Constructor
    public: BreakableJointPlugin();

    /// \brief Destructor
    public: virtual ~BreakableJointPlugin();

    /// \brief Load the plugin.
    /// \param[in] _parent Pointer to the parent sensor.
    /// \param[in] _sdf SDF element for the plugin.
    public: virtual void Load(sensors::SensorPtr _parent, sdf::ElementPtr _sdf);

    /// \brief Overloaded Update callback.
    /// \param[in] _msg The force torque message.
    protected: virtual void OnUpdate(msgs::WrenchStamped _msg);

    /// \brief WorldUpdate callback, used to safely detach parent joint.
    protected: void OnWorldUpdate();

    /// \brief Pointer to the parent joint
    private: physics::JointPtr parentJoint;

    /// \brief Pointer to the world update event connection
    private: event::ConnectionPtr worldConnection;

    /// \brief Breaking force threshold (N).
    private: double breakingForce;

    /// \brief The parent sensor
    private: sensors::ForceTorqueSensorPtr parentSensor;

    /// \brief Pointer to the update event connection
    private: event::ConnectionPtr connection;
  };
}
#endif