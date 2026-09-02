#pragma once

#include "remove_cv.hpp"
#include "remove_reference.hpp"

namespace pankey{

	namespace Utility{

		namespace Base{

			template<class T>
			struct remove_cvref{ typedef typename remove_cv< typename remove_reference<T>::type >::type type; };

		}
	}

}
