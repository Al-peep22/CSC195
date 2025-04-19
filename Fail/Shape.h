#pragma once

class Shape {
public:
	enum eType {
		CIRCLE,
		RECTANGLE
	};
	Shape() {}
	~Shape() {}
	virtual float Area() = 0;
	virtual eType GetType() = 0;
};