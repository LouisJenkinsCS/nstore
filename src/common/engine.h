#ifndef ENGINE_H_
#define ENGINE_H_

#include "txn.h"

class engine{
    public:
		virtual void loader() = 0;
		virtual void runner() = 0;

		virtual std::string read(txn t) = 0;
		virtual int update(txn t) = 0;

		virtual int test() = 0;

		virtual ~engine() {}
};

#endif	/* ENGINE_H_ */
