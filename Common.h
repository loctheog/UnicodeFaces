#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Cephei/HBPreferences.h>

extern HBPreferences* preferences;

#define UFBundleID @"com.tapsharp.unicodefaces"
#define UFBundleID_Notification [NSString stringWithFormat:@"%@/ReloadPrefs", UFBundleID]
#define UFBundle_PrefsFilePath  [NSString stringWithFormat:@"/var/mobile/Library/Preferences/%@.plist", UFBundleID]

#define defaultUnifaces @[@"¯\\_(ツ)_/¯", @"(⌐■_■)", @"๏̯͡๏﴿", @"q(●‿●)p", @"◎⃝ _◎⃝ ;", @"╭∩╮(-_-)╭∩╮", @"ಠ_ಠ", @"ಠ‿ಠ", @"ಠ╭╮ಠ", @"(ง’̀-’́)ง", @"ꏱ𐐃.𐐃ꎍ", @"(ಥ﹏ಥ)", @"ᕕ( ᐛ )ᕗ", @"◉_◉", @"( ◕ ◡ ◕ )", @"(╯°□°）╯︵ ┻━┻", @"┬─┬ノ( º _ ºノ)", @"(ு८ு_ .:)", @"ヽ(｀Д´)ﾉ", @"( ͡° ͜ʖ ͡°)", @"╿︡O͟-O︠╿", @"ʕ•ᴥ•ʔ", @"ʘ̃˻ʘ̃", @"༼ ༎ຶ ෴ ༎ຶ༽", @"(☞ﾟヮﾟ)☞ ", @"(ᵔᴥᵔ)", @"[̲̅$̲̅(̲̅5̲̅)̲̅$̲̅]", @"ヽ༼ຈل͜ຈ༽ﾉ", @"(´･ω･`)", @"(・_・、)(_・、 )(・、 )", @"ლ,ᔑ•ﺪ͟͠•ᔐ.ლ", @"⨀⦢⨀", @"º╲˚\\╭ᴖ_ᴖ╮/˚╱º", @"º(•♠•)º", @"✌ ⎦˚◡˚⎣ ✌"]