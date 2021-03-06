// Generated by scripts/generate_command_definition.py

#include "ac.command.h"

template <> class BDL::CustomCommand::CommandParameterProxy<Ban> {
	Ban value;

public:
static auto fetch_tid() { return type_id<CommandRegistry, Ban>(); }
static constexpr auto parser = &CommandRegistry::fake_parse;
static constexpr auto type = CommandParameterDataType::NORMAL;
static constexpr auto enum_name = "Ban";

operator Ban() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Unban> {
	Unban value;

public:
static auto fetch_tid() { return type_id<CommandRegistry, Unban>(); }
static constexpr auto parser = &CommandRegistry::fake_parse;
static constexpr auto type = CommandParameterDataType::NORMAL;
static constexpr auto enum_name = "Unban";

operator Unban() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Invchk> {
	Invchk value;

public:
static auto fetch_tid() { return type_id<CommandRegistry, Invchk>(); }
static constexpr auto parser = &CommandRegistry::fake_parse;
static constexpr auto type = CommandParameterDataType::NORMAL;
static constexpr auto enum_name = "Invchk";

operator Invchk() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<AcReload> {
	AcReload value;

public:
static auto fetch_tid() { return type_id<CommandRegistry, AcReload>(); }
static constexpr auto parser = &CommandRegistry::fake_parse;
static constexpr auto type = CommandParameterDataType::NORMAL;
static constexpr auto enum_name = "AcReload";

operator AcReload() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Kick> {
	Kick value;

public:
static auto fetch_tid() { return type_id<CommandRegistry, Kick>(); }
static constexpr auto parser = &CommandRegistry::fake_parse;
static constexpr auto type = CommandParameterDataType::NORMAL;
static constexpr auto enum_name = "Kick";

operator Kick() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Mute> {
	Mute value;

public:
static auto fetch_tid() { return type_id<CommandRegistry, Mute>(); }
static constexpr auto parser = &CommandRegistry::fake_parse;
static constexpr auto type = CommandParameterDataType::NORMAL;
static constexpr auto enum_name = "Mute";

operator Mute() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Bangui> {
	Bangui value;

public:
static auto fetch_tid() { return type_id<CommandRegistry, Bangui>(); }
static constexpr auto parser = &CommandRegistry::fake_parse;
static constexpr auto type = CommandParameterDataType::NORMAL;
static constexpr auto enum_name = "Bangui";

operator Bangui() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Kickall> {
	Kickall value;

public:
static auto fetch_tid() { return type_id<CommandRegistry, Kickall>(); }
static constexpr auto parser = &CommandRegistry::fake_parse;
static constexpr auto type = CommandParameterDataType::NORMAL;
static constexpr auto enum_name = "Kickall";

operator Kickall() const noexcept { return value; }
};

struct ACCommand_0 : Command {
	CommandParameterProxy<Ban> mode;
	CommandParameterProxy<std::string> target;
	CommandParameterProxy<int> time;
	virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
		ACCommand context {origin, output};
		context.ban(mode, target, time);
	}
};

struct ACCommand_1 : Command {
	CommandParameterProxy<Unban> mode;
	CommandParameterProxy<std::string> target;
	virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
		ACCommand context {origin, output};
		context.unban(mode, target);
	}
};

struct ACCommand_2 : Command {
	CommandParameterProxy<Invchk> mode;
	CommandParameterProxy<CommandSelector<Player> > target;
	virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
		ACCommand context {origin, output};
		context.invchk(mode, target);
	}
};

struct ACCommand_3 : Command {
	CommandParameterProxy<AcReload> mode;
	virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
		ACCommand context {origin, output};
		context.reload(mode);
	}
};

struct ACCommand_4 : Command {
	CommandParameterProxy<Kickall> mode;
	virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
		ACCommand context {origin, output};
		context.kickall(mode);
	}
};

struct ACCommand_5 : Command {
	CommandParameterProxy<Kick> mode;
	CommandParameterProxy<std::string> target;
	virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
		ACCommand context {origin, output};
		context.kick(mode, target);
	}
};

struct ACCommand_6 : Command {
	CommandParameterProxy<Mute> mode;
	CommandParameterProxy<CommandSelector<Player> > target;
	CommandParameterProxy<int> time;
	virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
		ACCommand context {origin, output};
		context.mute(mode, target, time);
	}
};

struct ACCommand_7 : Command {
	CommandParameterProxy<Bangui> mode;
	virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
		ACCommand context {origin, output};
		context.bangui(mode);
	}
};

void register_commands() {
	auto &instance = CustomCommandRegistry::getInstance();
	{
		auto &item = instance.registerEnum<Ban>();
		item.addValue("ban", Ban::ban);
	}
	{
		auto &item = instance.registerEnum<Unban>();
		item.addValue("unban", Unban::unban);
	}
	{
		auto &item = instance.registerEnum<Invchk>();
		item.addValue("invchk", Invchk::invchk);
	}
	{
		auto &item = instance.registerEnum<AcReload>();
		item.addValue("reload", AcReload::reload);
	}
	{
		auto &item = instance.registerEnum<Kick>();
		item.addValue("kick", Kick::kick);
	}
	{
		auto &item = instance.registerEnum<Mute>();
		item.addValue("mute", Mute::mute);
	}
	{
		auto &item = instance.registerEnum<Bangui>();
		item.addValue("bangui", Bangui::bangui);
	}
	{
		auto &item = instance.registerEnum<Kickall>();
		item.addValue("kickall", Kickall::kickall);
	}
	{
		auto &cmd = instance.registerCommand<ACCommand>();
		{
			auto &ovl = cmd.registerOverload<ACCommand_0>();
			ovl.addParameter<Ban>("mode", false, offsetof(ACCommand_0, mode));
			ovl.addParameter<std::string>("target", false, offsetof(ACCommand_0, target));
			ovl.addParameter<int>("time", true, offsetof(ACCommand_0, time));
		}
		{
			auto &ovl = cmd.registerOverload<ACCommand_1>();
			ovl.addParameter<Unban>("mode", false, offsetof(ACCommand_1, mode));
			ovl.addParameter<std::string>("target", false, offsetof(ACCommand_1, target));
		}
		{
			auto &ovl = cmd.registerOverload<ACCommand_2>();
			ovl.addParameter<Invchk>("mode", false, offsetof(ACCommand_2, mode));
			ovl.addParameter<CommandSelector<Player> >("target", false, offsetof(ACCommand_2, target));
		}
		{
			auto &ovl = cmd.registerOverload<ACCommand_3>();
			ovl.addParameter<AcReload>("mode", false, offsetof(ACCommand_3, mode));
		}
		{
			auto &ovl = cmd.registerOverload<ACCommand_4>();
			ovl.addParameter<Kickall>("mode", false, offsetof(ACCommand_4, mode));
		}
		{
			auto &ovl = cmd.registerOverload<ACCommand_5>();
			ovl.addParameter<Kick>("mode", false, offsetof(ACCommand_5, mode));
			ovl.addParameter<std::string>("target", false, offsetof(ACCommand_5, target));
		}
		{
			auto &ovl = cmd.registerOverload<ACCommand_6>();
			ovl.addParameter<Mute>("mode", false, offsetof(ACCommand_6, mode));
			ovl.addParameter<CommandSelector<Player> >("target", false, offsetof(ACCommand_6, target));
			ovl.addParameter<int>("time", false, offsetof(ACCommand_6, time));
		}
		{
			auto &ovl = cmd.registerOverload<ACCommand_7>();
			ovl.addParameter<Bangui>("mode", false, offsetof(ACCommand_7, mode));
		}
	}
}
