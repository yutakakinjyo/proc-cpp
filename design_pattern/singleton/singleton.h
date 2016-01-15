#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
 public:
  static Singleton& getInstance();
  int i;
 private:
  Singleton();
};

#endif // SINGLETON_H
