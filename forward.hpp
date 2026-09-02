#pragma once

#include "remove_reference.hpp"

namespace pankey{

namespace Utility{

	namespace Base{

		template<class T>
		T&& forward(typename remove_reference<T>::type& arg){
			return static_cast<T&&>(arg);
		}


	}
}

}
