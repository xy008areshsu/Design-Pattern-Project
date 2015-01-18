#include "SingletonClass.h"

#include <memory>
#include <iostream>

using namespace std;


void foo(void)
{
  SingletonClass::instance()->set_value(1);
  cout << "foo: global_ptr is " << SingletonClass::instance()->get_value() << '\n';
}

void bar(void)
{
  SingletonClass::instance()->set_value(2);
  cout << "bar: global_ptr is " << SingletonClass::instance()->get_value() << '\n';
}

int main()
{
  cout << "main: global_ptr is " << SingletonClass::instance()->get_value() << '\n';
  foo();
  bar();
}