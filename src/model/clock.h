#ifndef CLOCK_H
#define CLOCK_H


class Clock
{
public:
	int gets_hours(long long seconds);
	int gets_minutes(long long seconds);
	int gets_seconds(long long seconds);
	void display_time();
};

#endif // CLOCK_H