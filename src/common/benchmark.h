#pragma once

#include <vector>

#include "config.h"
#include "engine.h"
#include "timer.h"
#include "database.h"

namespace storage {

class benchmark {
 public:
  benchmark(unsigned int _tid, database* _db, timer* _tm,
            struct static_info* _sp) {
    PM_EQU(tid, _tid);
    PM_EQU(tm, _tm);
    PM_EQU(db, _db);
    PM_EQU(sp, _sp);
  }

  virtual void load() = 0;
  virtual void execute() = 0;
  virtual void sim_crash() = 0;

  virtual ~benchmark() {
  }

  unsigned int tid;
  timer* tm;
  database* db;
  struct static_info* sp;
};

}
