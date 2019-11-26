/*
 * Copyright (C) 2012 Open Source Robotics Foundation
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

#ifndef GAZEBO_PLUGINS_CONTACTPLUGIN_HH_
#define GAZEBO_PLUGINS_CONTACTPLUGIN_HH_

#include <string>

#include <gazebo/common/Plugin.hh>
#include <gazebo/sensors/sensors.hh>
#include "gazebo/util/system.hh"

namespace gazebo
{
  /// \brief A plugin for a contact sensor. Inherit from this class to make
  /// your own contact plugin.
<<<<<<< HEAD
  class GZ_PLUGIN_VISIBLE ContactPlugin : public SensorPlugin
=======
  class GAZEBO_VISIBLE ContactPlugin : public SensorPlugin
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
  {
    /// \brief Constructor.
    public: ContactPlugin();

    /// \brief Destructor.
    public: virtual ~ContactPlugin();

    /// \brief Load the sensor plugin.
    /// \param[in] _sensor Pointer to the sensor that loaded this plugin.
    /// \param[in] _sdf SDF element that describes the plugin.
    public: virtual void Load(sensors::SensorPtr _sensor, sdf::ElementPtr _sdf);

    /// \brief Callback that recieves the contact sensor's update signal.
    /// Override this this function to get callbacks when the contact sensor
    /// is updated with new data.
    private: virtual void OnUpdate();

    /// \brief Pointer to the contact sensor
    private: sensors::ContactSensorPtr parentSensor;

    /// \brief Connection that maintains a link between the contact sensor's
    /// updated signal and the OnUpdate callback.
    private: event::ConnectionPtr updateConnection;
  };
}
#endif