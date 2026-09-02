#pragma once

namespace pankey{

	namespace Utility{

		namespace Base{

			template <class T>
			struct remove_volatile { typedef T type; };

			template <class T>
			struct remove_volatile<volatile T> { typedef T type; };

		}
	}

}
