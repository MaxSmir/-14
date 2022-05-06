#pragma once
#ifndef CAMERA_H
#define	CAMERA_H

#include "math_3d.h"

//Этот класс хранит параметры камеры и может их изменять основываясь на событиях движения, которые он получит.
//Атрибуты камеры будут перехвачены классом конвейера, а тот уже и создаст матрицу преобразований из них.
class Camera
{
public:

    Camera();
    //3 свойства, которые характеризуют камеру - позиция, направление и верхний вектор.
    Camera(const Vector3f& Pos, const Vector3f& Target, const Vector3f& Up);

    bool OnKeyboard(int Key); //доставляет события клавиатуры в класс.
                              //Он возвращает значение типа bool, который указывает, воспринято ли камерой событие.

    const Vector3f& GetPos() const
    {
        return m_pos;
    }

    const Vector3f& GetTarget() const
    {
        return m_target;
    }

    const Vector3f& GetUp() const
    {
        return m_up;
    }

private:

    Vector3f m_pos;
    Vector3f m_target;
    Vector3f m_up;
};

#endif	/* CAMERA_H */