#ifndef DEMO_H
#define DEMO_H

class Demo
{
	public:
		int get() {
			return 5;
		}
};

int get(){
	return 10;
}

namespace NS
{
	int get() {
		return 20;
	}
}

#endif
