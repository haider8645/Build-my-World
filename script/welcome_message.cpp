#include <gazebo/gazebo.hh>

namespace gazebo
{
  class MyWorld : public WorldPlugin
  {
    public:
    MyWorld() : WorldPlugin(){
    	printf("Welcome to my virtual world!\n");
    }

    void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf){
    }
  };
  GZ_REGISTER_WORLD_PLUGIN(MyWorld)
}
