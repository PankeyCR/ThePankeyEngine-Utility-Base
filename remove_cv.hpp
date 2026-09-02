#pragma once

#include "remove_volatile.hpp"
#include "remove_const.hpp"

namespace pankey{

	namespace Utility{

		namespace Base{

			template<class T>
			struct remove_cv{ typedef typename remove_const< typename remove_volatile<T>::type >::type type; };

		}
	}

}
