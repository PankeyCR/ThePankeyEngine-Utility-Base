#pragma once

namespace pankey{

	namespace Utility{

		namespace Base{

			template <class T>
			struct remove_const { typedef T type; };

			template <class T>
			struct remove_const<const T> { typedef T type; };

		}
	}

}
