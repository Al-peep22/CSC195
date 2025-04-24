#pragma once
#include<iostream>
namespace math{
	template<typename T>
	class Point {
	public:
		Point() = default;
		Point(T x, T y) : x{ x }, y{ y } {
		}

		Point<T> operator + (const Point<T>& other) const {
			return Point<T>(this->x + other.x, this->y + other.y);
		}

		Point<T> operator - (const Point<T>& other) const {
			return Point<T>(this->x - other.x, this->y - other.y);
		}

		bool operator == (const Point<T>& other) const {
			return (this->x == other.x && this->y == other.y);
		}

		bool operator != (const Point<T>& other) const {
			return !(*this == other);
		}

		friend std::ostream& operator << (std::ostream& ostream, const Point<T>& p) {
			ostream << p.x << " " << p.y;
			return ostream;
		}

		friend std::istream& operator << (std::istream& istream, Point<T>& p) {
			istream >> p.x;
			istream >> p.y;
			return istream;
		}

		Point<T>Add(const Point<T> other) const {
			return Point<T>(this->x + other.x, this->y + other.y);
		}
		T GetX() const { return x; }
		T GetY() const { return y; }

	private:
		int x = 0;
		int y = 0;
	};
	using ipoint_t = Point<int>;
}