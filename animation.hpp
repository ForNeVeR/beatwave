#ifndef ANIMATION_HPP_
#define ANIMATION_HPP_

template <typename State>
class Animation
{
public:
    virtual ~Animation() = default;
    virtual State nextState(const sf::Int32 deltaTime) = 0;
    virtual bool isFinished() const = 0;
};

#endif  // ANIMATION_HPP_