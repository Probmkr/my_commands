#include <string>
#include <queue>
#include "arg_parse_funcs.h"

using namespace std;

bool parse_args(int argc, queue<string> &args) {
  // キューから引数を取り出す
  string arg;
  while(!args.empty()) {
    arg = args.front();
    args.pop();
  }
}
