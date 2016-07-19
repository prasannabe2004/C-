/*
 * App.h
 *
 *  Created on: Jul 18, 2016
 *      Author: prasanna
 */

#ifndef APP_H_
#define APP_H_

class App {
public:
	App();
	App(int,int,int);
	virtual ~App();

	int getX(void);
	int getY(void);
	int getZ(void);
	int getpp(void);

private:
	int x;
	int y;
	int z;
	int pp;
};

#endif /* APP_H_ */
