#include <iostream>
#include <unordered_map>
#include <string>

std::unordered_map<std::string, int> SkillCooldowns;

void setCooldown(std::string skillName, int currentTime, int cooldownTime)
{
  if (skillName.empty())
  {
    std::cout << "Nama skill tidak boleh kosong" << std::endl;
    return;
  }
  else if (currentTime < 0 || cooldownTime < 0)
  {
    std::cout << "Waktu tidak boleh negatif" << std::endl;
    return;
  }

  // menambahkan skill ke dalam map dengan key adalah nama skill dan value adalah waktu cooldown
  // jika skill sudah ada, maka waktu cooldown akan diupdate
  // currentTime + cooldownTime adalah waktu cooldown yang baru
  SkillCooldowns[skillName] = currentTime + cooldownTime;
  std::cout << "Skill " << skillName << " cooldown diatur pada waktu " << SkillCooldowns[skillName] << std::endl;
}

bool isSkillReady(const std::string skillName, int currentTime)
{
  if (skillName.empty() || currentTime < 0)
  {
    return false;
  }

  if (SkillCooldowns.find(skillName) == SkillCooldowns.end())
  {
    return true;
  }

  return SkillCooldowns[skillName] <= currentTime;
}

int main(int argc, char const *argv[])
{
  setCooldown("Fireball", 5, 10);
  std::cout << (isSkillReady("Fireball", 10) ? "Fireball is ready" : "Fireball is not ready") << std::endl;

  std::cout << (isSkillReady("Fireball", 15) ? "Fireball is ready" : "Fireball is not ready") << std::endl;

  setCooldown("Ice Spike", 0, 5);
  std::cout << (isSkillReady("Ice Spike", 10) ? "Ice Spike is ready" : "Ice Spike is not ready") << std::endl;


  // stone wall tidak set cooldown maka akan otomatis ready
  std::cout << (isSkillReady("StoneWall", 40) ? "StoneWall is ready" : "StoneWall is not ready") << std::endl;

  return 0;
}


