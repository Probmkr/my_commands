#ifndef ARG_TYPES_H
#define ARG_TYPES_H
#include <string>

using namespace std;

struct arg_type {
  char sname;
  string lname;
  string type;
  string default_value;
  string description;
};

string arg_types[][2] = {
  {
    "t",
    "type"
  },
  {
    "f",
    "file"
  }
};

#endif
