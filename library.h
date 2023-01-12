#ifndef LIBRARYTEMPLATE_LIBRARY_H
#define LIBRARYTEMPLATE_LIBRARY_H

void hello();


template<class T>
class Vector3 {
public:
    union {
        struct {
            T x, y, z;
        };
        struct {
            T r, g, b;
        };
    };

    inline Vector3<T> operator+(const Vector3<T> &other) {
        return Vector3<T>{x + other.x,y + other.y, z + other.z};
    }
    inline Vector3<T> operator*(const Vector3<T> &other) {
        return Vector3<T>{x * other.x,y * other.y, z * other.z};
    }
    inline Vector3<T> operator-(const Vector3<T> &other) {
        return Vector3<T>{x - other.x,y - other.y, z - other.z};
    }
    inline Vector3<T> operator/(const Vector3<T> &other) {
        return Vector3<T>{x / other.x,y / other.y, z / other.z};
    }
    inline bool operator==(const Vector3<T> &other) {
        return other.x == x && other.y == y && other.z == z;
    }
    inline bool operator!=(const Vector3<T> &other) {
        return other.x != x || other.y != y || other.z != z;
    }

    inline void operator+=(const Vector3<T> &other) {
        x+= other.x;
        y+= other.y;
        z+= other.z;
    }
};

#endif //LIBRARYTEMPLATE_LIBRARY_H
