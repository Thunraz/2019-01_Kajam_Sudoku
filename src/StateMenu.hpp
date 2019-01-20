#ifndef GAME_STATE_MENU_HPP_INCLUDEGUARD
#define GAME_STATE_MENU_HPP_INCLUDEGUARD

#include "JamTemplate/GameState.hpp"

namespace JamTemplate
{
	class SmartText;
	class SmartShape;
}

class StateMenu : public JamTemplate::GameState 
{
public:
	StateMenu();

private:
	std::shared_ptr<JamTemplate::SmartShape> m_background;
	std::shared_ptr<JamTemplate::SmartText>  m_text_Title;
	std::shared_ptr<JamTemplate::SmartText>  m_text_1P;
	std::shared_ptr<JamTemplate::SmartText>  m_text_2P;

	bool m_modeSelect{ false };

	void doInternalUpdate(float const /*elapsed*/) override;
	void doCreate() override;
	void doInternalDraw() const override;
	void createImages();

	void switchToLeft();
	void switchToRight();

};

#endif
