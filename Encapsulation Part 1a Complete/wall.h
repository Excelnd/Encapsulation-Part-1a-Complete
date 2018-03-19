#pragma once
class wall
{
	int length;
	int width;

public:
	wall(void);

	void set(int new_length, int new_width);

	int get_area(void) { return(length * width); }

	~wall(void);
};