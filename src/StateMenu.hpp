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

	mutable std::shared_ptr<JamTemplate::SmartText>  m_text_Title;
	std::shared_ptr<JamTemplate::SmartText>  m_text_1P;
	std::shared_ptr<JamTemplate::SmartText>  m_text_2P;
	std::shared_ptr<JamTemplate::SmartText>  m_text_Credits;
	std::shared_ptr<JamTemplate::SmartText>  m_text_Difficulty;

	std::shared_ptr<JamTemplate::SmartShape> m_overlay;


	bool m_modeSelect{ false };
	bool m_starting{ false };

	void doInternalUpdate(float const /*elapsed*/) override;
	void doCreate() override;
	void doInternalDraw() const override;
	void createImages();

	void switchToLeft();
	void switchToRight();


	void increaseDifficulty();
	void decreaseDifficulty();
	void updateDifficultyString();

};

#endif
