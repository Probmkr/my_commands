#ifndef ARG_TYPES_H
#define ARG_TYPES_H
#include <string>

using namespace std;

struct arg_type {
  string sname;
  string lname;
  int arg_required;
  /**
    * 0: not required
    * 1: required but has no default value
    * 2: required and has default value
    * 3: optional and has no default value
    * 4: optional and has default value but is set
    */
  string type;
  string default_value;
  string description;
};

struct arg_type arg_types[] = {
  {"-f", "--file", 1, "string", "", "input file name"},
  {"-o", "--output", 1, "string", "", "output file name"},
  {"-t", "--type", 1, "string", "", "the type of analyze function"},
  // {"-d", "--debug", 4, "int", "0", "debug level"},
  {"-h", "--help", 0, "\n", "\n", "show help"},
  {"\0", "\0", 0, "\0", "\0", "\0"},
}

#endif
