template< class B >
concept boolean-testable =                       
    __boolean_testable_impl<B> &&
b) {
        { !std::forward<B>(b) } -> __boolean_testable_impl;
    };

    // blabla
