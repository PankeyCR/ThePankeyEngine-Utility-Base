#pragma once

#include "remove_reference.hpp"

namespace pankey{

	namespace Utility{

		namespace Base{

			template<class T>
			typename remove_reference<T>::type&& move(typename remove_reference<T>::type& arg){
				return (typename remove_reference<T>::type&&)(arg);
			}

			template<class T>
			typename remove_reference<T>::type&& move(T&& arg){
				return (typename remove_reference<T>::type&&)(arg);
			}


		}
	}

}
