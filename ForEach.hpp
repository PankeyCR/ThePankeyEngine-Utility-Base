
#ifndef ForEach_hpp
	#define ForEach_hpp

	namespace pankey{

		namespace Base{

			template<typename... Ts>
			struct ForEach;

			template<>
			struct ForEach<> {
				template<typename F, typename... Args>
    			static void apply(F&&, Args...) {}
			};

			template<typename T, typename... Ts>
			struct ForEach<T, Ts...> {
				template<typename F, typename... Args>
				static void apply(F&& f, Args... a_args) {
					f.template operator()<T>(a_args...);
					ForEach<Ts...>::apply(static_cast<F&&>(f), a_args...);
				}
			};
		}
	}

#endif
