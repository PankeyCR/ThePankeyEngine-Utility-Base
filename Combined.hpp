
#pragma once

namespace pankey{

	namespace Utility{

		namespace Base{

			template<class... Bases>
			struct Combined : public Bases...{
				template<class T>
				T& get(){
					return static_cast<T&>(*this);
				}
			};

		}

	}

}
