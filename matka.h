#ifndef MATKA_H
#define MATKA_H

class MATKA
{
protected:
	bool alive;
	
	int corX;
	int corY;
	
	int limitX;
	int limitY;
	
public:
	MATKA();
	~MATKA();
	
	void move();
	bool ret_alive();
	void set_alive(bool);
};

#endif