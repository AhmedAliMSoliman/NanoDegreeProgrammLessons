// Directions
// In this exercise, you'll update the class Sphere so that it becomes possible to change the radius of a sphere after it has been initialized.
//In order to do this, you'll move the two class invariants into private member functions.

// 1. Move the range-check on radius_ into a private member function.
// 2. Move the volume_ calculation, which depends on the value of radius_ into the same private member function.
// 3. Verify that the class still functions correctly.
// 4. Add a mutator method to change the radius of an existing Sphere.
// 5. Verify that the mutator method successfully updates both the radius and the volume.