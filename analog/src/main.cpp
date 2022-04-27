#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cassert>
#include <fstream>
#include <sstream>
#include <queue>
#include "lib/arg_types.h"

using namespace std;

int main(int argc, char *argv[]) {
  // キューを初期化する
  queue<string> args;

  // キューに引数を入れる
  for(int i = 0; i < argc; i++) {
    args.push(argv[i]);
  }
}