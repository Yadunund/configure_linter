

class Walker
{
public:
  virtual void walk() = 0;
};

class NoiseMaker
{
public:
  virtual void make_noise() = 0;
};

class Animal
{
public:

  void teleport(double x, double y);

private:
  std::unique_ptr<Walker> walker;
  std::unique_ptr<NoiseMaker> noise_maker;
};

Animal make_dog(DogType type = DogType::Corgi);

/*
class DogTraits
{
public:

  int legs = 4;
  Gait gait = Gait::Trot;
  std::string noise;

};

class Dog : public Animal
{
public:

  Dog(DogTraits traits);

  void make_noise() final
  {
    std::cout << traits.noise << std::endl;
  }

private:

  DogTraits traits;
};
*/


class Corgi : public Animal
{
public:
  void make_noise() override
  {
    std::cout << "yip!" << std::endl;
  }

  void walk() override
  {
  }

private:

  DogTraits 

};











/// OLD WAY

class Animal;

class Quadruped : virtual public Animal { };
class LoudAnimal : virtual public Animal { };

class Dog : public Quadruped, public LoudAnimal { };
class Cat : public Quadruped { };

if (some_condition && other_condition)
  foo();

bool variable = value + other_value*factor;

for (std::size_t i = 0; i < num; ++i)
{
}


1. Foo * foo;
2. Foo* foo; <- Grey's preference
3. Foo *foo;


(*foo) -> Foo&

Foo &foo;

(&foo) -> Foo*

Foo *foo, bar;


Pointer to a const Foo
1. const Foo* foo; <- Grey's preference
2. Foo const * foo;

const Pointer to a Foo
1. Foo* const foo;

const Pointer to a const Foo
1. const Foo* const foo;
2. Foo const * const foo;


using FooConstPtr = Foo * const;
FooConstPtr* foo;

template<typename Iter>
class Foo
{
public:
  Iter bar();
};

#include <detail/Foo.ipp>




// Inside the include directory
#ifndef PATH__FROM__INCLUDE__FILENAME_HPP
#define PATH__FROM__INCLUDE__FILENAME_HPP

// rmf_traffic/agv/Planner.hpp
#ifdef RMF_TRAFFIC__AGV__PLANNER_HPP



#endif // PATH__FROM__INCLUDE__FILENAME_HPP


// Inside the src directory
#ifndef SRC__PATH__FROM__SRC__FILENAME_HPP
#define SRC__PATH__FROM__SRC__FILENAME_HPP

#endif // PATH__FROM__SRC__FILENAME_HPP






// detail/Foo.ipp

template<typename Iter>
Iter Foo::bar()
{
  /* implement bar() here */
}

.hpp
.cpp




std::vector<Foo<A>> a;





void bar()
{

}

using namespace rmf_traffic; // Please don't

namespace rmf_literals {

// m -> meters
// km -> kilometers

} // namespace rmf_literals

class Cat
{
public:

  void bar()
  {
    using namespace rmf_traffic; // Okay I guess
    using Something = rmf_traffic::Something; // Please this

    using namespace std::chrono_literals; // Definitely okay
    std::chrono::duration one_second = 1s;
    
  }

  void foo()
  {
    this->bar(); // 1
    bar();       // 2
  }
}



switch (value)
{
  case Value1: foo(); break;
  case Value2: bar(); break;
}

switch (value)
{
  case Value1:
  {
    foo();
    break;
  }

  case Value2:
  {
    bar();
    break;
  }
}


enum class

class EnumType
{
  enum {
    Enum1,
    Enum2,
    Enum3
  };
}


// A.hpp
class A { };


// B.hpp

//#include <A.hpp> // 1
#include <C.hpp>

class A; // 2

class B
{
public:

  C foo();

};


// user.cpp
//#include <A.hpp>
#include <B.hpp>

A a;
B b;
// b.foo();





