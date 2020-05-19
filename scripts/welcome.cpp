#include <gazebo/gazebo.hh>

//Code Largely Derived from Gazebo Plugin Tutorial at http://gazebosim.org/tutorials/?tut=plugins_hello_world

namespace gazebo
{
	class WelcomePlugin : public WorldPlugin
	{
		public: WelcomePlugin() : WorldPlugin()
				{
					printf("Welcome to James' World!\n");
				}

		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
				{
				}
	};
	GZ_REGISTER_WORLD_PLUGIN(WelcomePlugin)
}

