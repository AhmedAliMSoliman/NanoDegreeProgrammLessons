// Instructions

// Define class ParticleModel, including its state and Move() function.
// Extend class BicycleModel from class ParticleModel.
// Override the Move() function within class BicycleModel.
// Specify BicycleModel::Move() as override.
// Pass the tests in main() by verifying that the two Move() functions override each other in different scenarios.

#include <assert.h>
#include <cmath>

// TODO: Define PI
#define PI 3.14159

// TODO: Declare abstract class VehicleModel
  // TODO: Declare virtual function Move()
class VehicleModel
{
public: 
    virtual void Move(double v , double phi) = 0; 
};

// TODO: Derive class ParticleModel from VehicleModel
  // TODO: Override the Move() function
  // TODO: Define x, y, and theta
class ParticleModel : VehicleModel
{
public: 
    void Move(double v , double phi) override
    {   
        theta += phi;
        x += v * cos(theta);
        y += v * sin(theta);
    }
    double x = 0;
    double y = 0;
    double theta = 0;
};

// TODO: Derive class BicycleModel from ParticleModel
  // TODO: Override the Move() function
  // TODO: Define L
class BicycleModel : ParticleModel
{
public: 
    void Move(double v , double phi) override
    {
        theta += v / L * tan(phi);
        x += v * cos(theta);
        y += v * sin(theta);
    }
private: 
    double L = 1;
};

// TODO: Pass the tests
int main() {
  // Test function overriding
  ParticleModel particle;
  BicycleModel bicycle;
  particle.Move(10, PI / 9);
  bicycle.Move(10, PI / 9);
  assert(particle.x != bicycle.x);
  assert(particle.y != bicycle.y);
  assert(particle.theta != bicycle.theta);
}