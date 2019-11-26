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

#ifndef GAZEBO_PLUGINS_VEHICLEPLUGIN_HH_
#define GAZEBO_PLUGINS_VEHICLEPLUGIN_HH_

#include <string>
#include <vector>

#include <ignition/transport/Node.hh>
#include <ignition/math/Vector3.hh>

#include "gazebo/common/Plugin.hh"
#include "gazebo/physics/physics.hh"
#include "gazebo/transport/transport.hh"
#include "gazebo/util/system.hh"

namespace gazebo
{
<<<<<<< HEAD
  class GZ_PLUGIN_VISIBLE VehiclePlugin : public ModelPlugin
=======
  class GAZEBO_VISIBLE VehiclePlugin : public ModelPlugin
>>>>>>> 04f0a22d68ab5ea7ec5fa8e056bdf7c5978eeb14
  {
    /// \brief Constructor
    public: VehiclePlugin();

    public: virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf);
    public: virtual void Init();

    private: void OnUpdate();

    private: void OnVelMsg(ConstPosePtr &_msg);

    private: std::vector<event::ConnectionPtr> connections;

    private: physics::ModelPtr model;
    private: physics::LinkPtr chassis;
    private: std::vector<physics::JointPtr> joints;
    private: physics::JointPtr gasJoint, brakeJoint;
    private: physics::JointPtr steeringJoint;

    private: ignition::math::Vector3d velocity;

    private: transport::NodePtr node;
    private: transport::SubscriberPtr velSub;

    private: double frontPower, rearPower;
    private: double maxSpeed;
    private: double wheelRadius;

    private: double steeringRatio;
    private: double tireAngleRange;
    private: double maxGas, maxBrake;

    private: double aeroLoad;
    private: double swayForce;

    // Place ignition::transport objects at the end of this file to
    // guarantee they are destructed first.

    /// \brief Ignition Transport Node for communication.
    private: ignition::transport::Node nodeIgn;
  };
}
#endif
