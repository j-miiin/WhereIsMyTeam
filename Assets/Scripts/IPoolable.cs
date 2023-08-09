using System;

public interface IPoolable<T>
{
    void SetReturnObject(Action<T> action);
}