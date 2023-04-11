#pragma once
#include <iostream>

class Serializer
{
	public:
		template<typename Data>
		static uintptr_t serialize(Data* ptr)
		{
			return (reinterpret_cast<uintptr_t>(ptr));
		}
		
		template<typename Data>
		static Data* deserialize(uintptr_t raw)
		{
			return (reinterpret_cast<Data*>(raw));
		}

	private:
		Serializer();
		Serializer(const Serializer&);
		Serializer &operator=(const Serializer&);
		~Serializer();

};