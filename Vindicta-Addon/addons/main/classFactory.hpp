// This thing makes 'bro classes' of some other config classes
// bro class is just a copy of an existing class which has a different name
// I borrowed this idea from TFAR
// After Dedmen told me about it
// Sparker 31.05.2019
#define __BC(destClass, sourceClass, ID) class destClass##_##ID : sourceClass { };

#define COPY_CLASS_512(d, s) \
__BC(d,s,0) \
__BC(d,s,1) \
__BC(d,s,2) \
__BC(d,s,3) \
__BC(d,s,4) \
__BC(d,s,5) \
__BC(d,s,6) \
__BC(d,s,7) \
__BC(d,s,8) \
__BC(d,s,9) \
__BC(d,s,10) \
__BC(d,s,11) \
__BC(d,s,12) \
__BC(d,s,13) \
__BC(d,s,14) \
__BC(d,s,15) \
__BC(d,s,16) \
__BC(d,s,17) \
__BC(d,s,18) \
__BC(d,s,19) \
__BC(d,s,20) \
__BC(d,s,21) \
__BC(d,s,22) \
__BC(d,s,23) \
__BC(d,s,24) \
__BC(d,s,25) \
__BC(d,s,26) \
__BC(d,s,27) \
__BC(d,s,28) \
__BC(d,s,29) \
__BC(d,s,30) \
__BC(d,s,31) \
__BC(d,s,32) \
__BC(d,s,33) \
__BC(d,s,34) \
__BC(d,s,35) \
__BC(d,s,36) \
__BC(d,s,37) \
__BC(d,s,38) \
__BC(d,s,39) \
__BC(d,s,40) \
__BC(d,s,41) \
__BC(d,s,42) \
__BC(d,s,43) \
__BC(d,s,44) \
__BC(d,s,45) \
__BC(d,s,46) \
__BC(d,s,47) \
__BC(d,s,48) \
__BC(d,s,49) \
__BC(d,s,50) \
__BC(d,s,51) \
__BC(d,s,52) \
__BC(d,s,53) \
__BC(d,s,54) \
__BC(d,s,55) \
__BC(d,s,56) \
__BC(d,s,57) \
__BC(d,s,58) \
__BC(d,s,59) \
__BC(d,s,60) \
__BC(d,s,61) \
__BC(d,s,62) \
__BC(d,s,63) \
__BC(d,s,64) \
__BC(d,s,65) \
__BC(d,s,66) \
__BC(d,s,67) \
__BC(d,s,68) \
__BC(d,s,69) \
__BC(d,s,70) \
__BC(d,s,71) \
__BC(d,s,72) \
__BC(d,s,73) \
__BC(d,s,74) \
__BC(d,s,75) \
__BC(d,s,76) \
__BC(d,s,77) \
__BC(d,s,78) \
__BC(d,s,79) \
__BC(d,s,80) \
__BC(d,s,81) \
__BC(d,s,82) \
__BC(d,s,83) \
__BC(d,s,84) \
__BC(d,s,85) \
__BC(d,s,86) \
__BC(d,s,87) \
__BC(d,s,88) \
__BC(d,s,89) \
__BC(d,s,90) \
__BC(d,s,91) \
__BC(d,s,92) \
__BC(d,s,93) \
__BC(d,s,94) \
__BC(d,s,95) \
__BC(d,s,96) \
__BC(d,s,97) \
__BC(d,s,98) \
__BC(d,s,99) \
__BC(d,s,100) \
__BC(d,s,101) \
__BC(d,s,102) \
__BC(d,s,103) \
__BC(d,s,104) \
__BC(d,s,105) \
__BC(d,s,106) \
__BC(d,s,107) \
__BC(d,s,108) \
__BC(d,s,109) \
__BC(d,s,110) \
__BC(d,s,111) \
__BC(d,s,112) \
__BC(d,s,113) \
__BC(d,s,114) \
__BC(d,s,115) \
__BC(d,s,116) \
__BC(d,s,117) \
__BC(d,s,118) \
__BC(d,s,119) \
__BC(d,s,120) \
__BC(d,s,121) \
__BC(d,s,122) \
__BC(d,s,123) \
__BC(d,s,124) \
__BC(d,s,125) \
__BC(d,s,126) \
__BC(d,s,127) \
__BC(d,s,128) \
__BC(d,s,129) \
__BC(d,s,130) \
__BC(d,s,131) \
__BC(d,s,132) \
__BC(d,s,133) \
__BC(d,s,134) \
__BC(d,s,135) \
__BC(d,s,136) \
__BC(d,s,137) \
__BC(d,s,138) \
__BC(d,s,139) \
__BC(d,s,140) \
__BC(d,s,141) \
__BC(d,s,142) \
__BC(d,s,143) \
__BC(d,s,144) \
__BC(d,s,145) \
__BC(d,s,146) \
__BC(d,s,147) \
__BC(d,s,148) \
__BC(d,s,149) \
__BC(d,s,150) \
__BC(d,s,151) \
__BC(d,s,152) \
__BC(d,s,153) \
__BC(d,s,154) \
__BC(d,s,155) \
__BC(d,s,156) \
__BC(d,s,157) \
__BC(d,s,158) \
__BC(d,s,159) \
__BC(d,s,160) \
__BC(d,s,161) \
__BC(d,s,162) \
__BC(d,s,163) \
__BC(d,s,164) \
__BC(d,s,165) \
__BC(d,s,166) \
__BC(d,s,167) \
__BC(d,s,168) \
__BC(d,s,169) \
__BC(d,s,170) \
__BC(d,s,171) \
__BC(d,s,172) \
__BC(d,s,173) \
__BC(d,s,174) \
__BC(d,s,175) \
__BC(d,s,176) \
__BC(d,s,177) \
__BC(d,s,178) \
__BC(d,s,179) \
__BC(d,s,180) \
__BC(d,s,181) \
__BC(d,s,182) \
__BC(d,s,183) \
__BC(d,s,184) \
__BC(d,s,185) \
__BC(d,s,186) \
__BC(d,s,187) \
__BC(d,s,188) \
__BC(d,s,189) \
__BC(d,s,190) \
__BC(d,s,191) \
__BC(d,s,192) \
__BC(d,s,193) \
__BC(d,s,194) \
__BC(d,s,195) \
__BC(d,s,196) \
__BC(d,s,197) \
__BC(d,s,198) \
__BC(d,s,199) \
__BC(d,s,200) \
__BC(d,s,201) \
__BC(d,s,202) \
__BC(d,s,203) \
__BC(d,s,204) \
__BC(d,s,205) \
__BC(d,s,206) \
__BC(d,s,207) \
__BC(d,s,208) \
__BC(d,s,209) \
__BC(d,s,210) \
__BC(d,s,211) \
__BC(d,s,212) \
__BC(d,s,213) \
__BC(d,s,214) \
__BC(d,s,215) \
__BC(d,s,216) \
__BC(d,s,217) \
__BC(d,s,218) \
__BC(d,s,219) \
__BC(d,s,220) \
__BC(d,s,221) \
__BC(d,s,222) \
__BC(d,s,223) \
__BC(d,s,224) \
__BC(d,s,225) \
__BC(d,s,226) \
__BC(d,s,227) \
__BC(d,s,228) \
__BC(d,s,229) \
__BC(d,s,230) \
__BC(d,s,231) \
__BC(d,s,232) \
__BC(d,s,233) \
__BC(d,s,234) \
__BC(d,s,235) \
__BC(d,s,236) \
__BC(d,s,237) \
__BC(d,s,238) \
__BC(d,s,239) \
__BC(d,s,240) \
__BC(d,s,241) \
__BC(d,s,242) \
__BC(d,s,243) \
__BC(d,s,244) \
__BC(d,s,245) \
__BC(d,s,246) \
__BC(d,s,247) \
__BC(d,s,248) \
__BC(d,s,249) \
__BC(d,s,250) \
__BC(d,s,251) \
__BC(d,s,252) \
__BC(d,s,253) \
__BC(d,s,254) \
__BC(d,s,255) \
__BC(d,s,256) \
__BC(d,s,257) \
__BC(d,s,258) \
__BC(d,s,259) \
__BC(d,s,260) \
__BC(d,s,261) \
__BC(d,s,262) \
__BC(d,s,263) \
__BC(d,s,264) \
__BC(d,s,265) \
__BC(d,s,266) \
__BC(d,s,267) \
__BC(d,s,268) \
__BC(d,s,269) \
__BC(d,s,270) \
__BC(d,s,271) \
__BC(d,s,272) \
__BC(d,s,273) \
__BC(d,s,274) \
__BC(d,s,275) \
__BC(d,s,276) \
__BC(d,s,277) \
__BC(d,s,278) \
__BC(d,s,279) \
__BC(d,s,280) \
__BC(d,s,281) \
__BC(d,s,282) \
__BC(d,s,283) \
__BC(d,s,284) \
__BC(d,s,285) \
__BC(d,s,286) \
__BC(d,s,287) \
__BC(d,s,288) \
__BC(d,s,289) \
__BC(d,s,290) \
__BC(d,s,291) \
__BC(d,s,292) \
__BC(d,s,293) \
__BC(d,s,294) \
__BC(d,s,295) \
__BC(d,s,296) \
__BC(d,s,297) \
__BC(d,s,298) \
__BC(d,s,299) \
__BC(d,s,300) \
__BC(d,s,301) \
__BC(d,s,302) \
__BC(d,s,303) \
__BC(d,s,304) \
__BC(d,s,305) \
__BC(d,s,306) \
__BC(d,s,307) \
__BC(d,s,308) \
__BC(d,s,309) \
__BC(d,s,310) \
__BC(d,s,311) \
__BC(d,s,312) \
__BC(d,s,313) \
__BC(d,s,314) \
__BC(d,s,315) \
__BC(d,s,316) \
__BC(d,s,317) \
__BC(d,s,318) \
__BC(d,s,319) \
__BC(d,s,320) \
__BC(d,s,321) \
__BC(d,s,322) \
__BC(d,s,323) \
__BC(d,s,324) \
__BC(d,s,325) \
__BC(d,s,326) \
__BC(d,s,327) \
__BC(d,s,328) \
__BC(d,s,329) \
__BC(d,s,330) \
__BC(d,s,331) \
__BC(d,s,332) \
__BC(d,s,333) \
__BC(d,s,334) \
__BC(d,s,335) \
__BC(d,s,336) \
__BC(d,s,337) \
__BC(d,s,338) \
__BC(d,s,339) \
__BC(d,s,340) \
__BC(d,s,341) \
__BC(d,s,342) \
__BC(d,s,343) \
__BC(d,s,344) \
__BC(d,s,345) \
__BC(d,s,346) \
__BC(d,s,347) \
__BC(d,s,348) \
__BC(d,s,349) \
__BC(d,s,350) \
__BC(d,s,351) \
__BC(d,s,352) \
__BC(d,s,353) \
__BC(d,s,354) \
__BC(d,s,355) \
__BC(d,s,356) \
__BC(d,s,357) \
__BC(d,s,358) \
__BC(d,s,359) \
__BC(d,s,360) \
__BC(d,s,361) \
__BC(d,s,362) \
__BC(d,s,363) \
__BC(d,s,364) \
__BC(d,s,365) \
__BC(d,s,366) \
__BC(d,s,367) \
__BC(d,s,368) \
__BC(d,s,369) \
__BC(d,s,370) \
__BC(d,s,371) \
__BC(d,s,372) \
__BC(d,s,373) \
__BC(d,s,374) \
__BC(d,s,375) \
__BC(d,s,376) \
__BC(d,s,377) \
__BC(d,s,378) \
__BC(d,s,379) \
__BC(d,s,380) \
__BC(d,s,381) \
__BC(d,s,382) \
__BC(d,s,383) \
__BC(d,s,384) \
__BC(d,s,385) \
__BC(d,s,386) \
__BC(d,s,387) \
__BC(d,s,388) \
__BC(d,s,389) \
__BC(d,s,390) \
__BC(d,s,391) \
__BC(d,s,392) \
__BC(d,s,393) \
__BC(d,s,394) \
__BC(d,s,395) \
__BC(d,s,396) \
__BC(d,s,397) \
__BC(d,s,398) \
__BC(d,s,399) \
__BC(d,s,400) \
__BC(d,s,401) \
__BC(d,s,402) \
__BC(d,s,403) \
__BC(d,s,404) \
__BC(d,s,405) \
__BC(d,s,406) \
__BC(d,s,407) \
__BC(d,s,408) \
__BC(d,s,409) \
__BC(d,s,410) \
__BC(d,s,411) \
__BC(d,s,412) \
__BC(d,s,413) \
__BC(d,s,414) \
__BC(d,s,415) \
__BC(d,s,416) \
__BC(d,s,417) \
__BC(d,s,418) \
__BC(d,s,419) \
__BC(d,s,420) \
__BC(d,s,421) \
__BC(d,s,422) \
__BC(d,s,423) \
__BC(d,s,424) \
__BC(d,s,425) \
__BC(d,s,426) \
__BC(d,s,427) \
__BC(d,s,428) \
__BC(d,s,429) \
__BC(d,s,430) \
__BC(d,s,431) \
__BC(d,s,432) \
__BC(d,s,433) \
__BC(d,s,434) \
__BC(d,s,435) \
__BC(d,s,436) \
__BC(d,s,437) \
__BC(d,s,438) \
__BC(d,s,439) \
__BC(d,s,440) \
__BC(d,s,441) \
__BC(d,s,442) \
__BC(d,s,443) \
__BC(d,s,444) \
__BC(d,s,445) \
__BC(d,s,446) \
__BC(d,s,447) \
__BC(d,s,448) \
__BC(d,s,449) \
__BC(d,s,450) \
__BC(d,s,451) \
__BC(d,s,452) \
__BC(d,s,453) \
__BC(d,s,454) \
__BC(d,s,455) \
__BC(d,s,456) \
__BC(d,s,457) \
__BC(d,s,458) \
__BC(d,s,459) \
__BC(d,s,460) \
__BC(d,s,461) \
__BC(d,s,462) \
__BC(d,s,463) \
__BC(d,s,464) \
__BC(d,s,465) \
__BC(d,s,466) \
__BC(d,s,467) \
__BC(d,s,468) \
__BC(d,s,469) \
__BC(d,s,470) \
__BC(d,s,471) \
__BC(d,s,472) \
__BC(d,s,473) \
__BC(d,s,474) \
__BC(d,s,475) \
__BC(d,s,476) \
__BC(d,s,477) \
__BC(d,s,478) \
__BC(d,s,479) \
__BC(d,s,480) \
__BC(d,s,481) \
__BC(d,s,482) \
__BC(d,s,483) \
__BC(d,s,484) \
__BC(d,s,485) \
__BC(d,s,486) \
__BC(d,s,487) \
__BC(d,s,488) \
__BC(d,s,489) \
__BC(d,s,490) \
__BC(d,s,491) \
__BC(d,s,492) \
__BC(d,s,493) \
__BC(d,s,494) \
__BC(d,s,495) \
__BC(d,s,496) \
__BC(d,s,497) \
__BC(d,s,498) \
__BC(d,s,499) \
__BC(d,s,500) \
__BC(d,s,501) \
__BC(d,s,502) \
__BC(d,s,503) \
__BC(d,s,504) \
__BC(d,s,505) \
__BC(d,s,506) \
__BC(d,s,507) \
__BC(d,s,508) \
__BC(d,s,509) \
__BC(d,s,510) \
__BC(d,s,511)

#define COPY_CLASS_1023(d, s)  \
__BC(d,s,0) \
__BC(d,s,1) \
__BC(d,s,2) \
__BC(d,s,3) \
__BC(d,s,4) \
__BC(d,s,5) \
__BC(d,s,6) \
__BC(d,s,7) \
__BC(d,s,8) \
__BC(d,s,9) \
__BC(d,s,10) \
__BC(d,s,11) \
__BC(d,s,12) \
__BC(d,s,13) \
__BC(d,s,14) \
__BC(d,s,15) \
__BC(d,s,16) \
__BC(d,s,17) \
__BC(d,s,18) \
__BC(d,s,19) \
__BC(d,s,20) \
__BC(d,s,21) \
__BC(d,s,22) \
__BC(d,s,23) \
__BC(d,s,24) \
__BC(d,s,25) \
__BC(d,s,26) \
__BC(d,s,27) \
__BC(d,s,28) \
__BC(d,s,29) \
__BC(d,s,30) \
__BC(d,s,31) \
__BC(d,s,32) \
__BC(d,s,33) \
__BC(d,s,34) \
__BC(d,s,35) \
__BC(d,s,36) \
__BC(d,s,37) \
__BC(d,s,38) \
__BC(d,s,39) \
__BC(d,s,40) \
__BC(d,s,41) \
__BC(d,s,42) \
__BC(d,s,43) \
__BC(d,s,44) \
__BC(d,s,45) \
__BC(d,s,46) \
__BC(d,s,47) \
__BC(d,s,48) \
__BC(d,s,49) \
__BC(d,s,50) \
__BC(d,s,51) \
__BC(d,s,52) \
__BC(d,s,53) \
__BC(d,s,54) \
__BC(d,s,55) \
__BC(d,s,56) \
__BC(d,s,57) \
__BC(d,s,58) \
__BC(d,s,59) \
__BC(d,s,60) \
__BC(d,s,61) \
__BC(d,s,62) \
__BC(d,s,63) \
__BC(d,s,64) \
__BC(d,s,65) \
__BC(d,s,66) \
__BC(d,s,67) \
__BC(d,s,68) \
__BC(d,s,69) \
__BC(d,s,70) \
__BC(d,s,71) \
__BC(d,s,72) \
__BC(d,s,73) \
__BC(d,s,74) \
__BC(d,s,75) \
__BC(d,s,76) \
__BC(d,s,77) \
__BC(d,s,78) \
__BC(d,s,79) \
__BC(d,s,80) \
__BC(d,s,81) \
__BC(d,s,82) \
__BC(d,s,83) \
__BC(d,s,84) \
__BC(d,s,85) \
__BC(d,s,86) \
__BC(d,s,87) \
__BC(d,s,88) \
__BC(d,s,89) \
__BC(d,s,90) \
__BC(d,s,91) \
__BC(d,s,92) \
__BC(d,s,93) \
__BC(d,s,94) \
__BC(d,s,95) \
__BC(d,s,96) \
__BC(d,s,97) \
__BC(d,s,98) \
__BC(d,s,99) \
__BC(d,s,100) \
__BC(d,s,101) \
__BC(d,s,102) \
__BC(d,s,103) \
__BC(d,s,104) \
__BC(d,s,105) \
__BC(d,s,106) \
__BC(d,s,107) \
__BC(d,s,108) \
__BC(d,s,109) \
__BC(d,s,110) \
__BC(d,s,111) \
__BC(d,s,112) \
__BC(d,s,113) \
__BC(d,s,114) \
__BC(d,s,115) \
__BC(d,s,116) \
__BC(d,s,117) \
__BC(d,s,118) \
__BC(d,s,119) \
__BC(d,s,120) \
__BC(d,s,121) \
__BC(d,s,122) \
__BC(d,s,123) \
__BC(d,s,124) \
__BC(d,s,125) \
__BC(d,s,126) \
__BC(d,s,127) \
__BC(d,s,128) \
__BC(d,s,129) \
__BC(d,s,130) \
__BC(d,s,131) \
__BC(d,s,132) \
__BC(d,s,133) \
__BC(d,s,134) \
__BC(d,s,135) \
__BC(d,s,136) \
__BC(d,s,137) \
__BC(d,s,138) \
__BC(d,s,139) \
__BC(d,s,140) \
__BC(d,s,141) \
__BC(d,s,142) \
__BC(d,s,143) \
__BC(d,s,144) \
__BC(d,s,145) \
__BC(d,s,146) \
__BC(d,s,147) \
__BC(d,s,148) \
__BC(d,s,149) \
__BC(d,s,150) \
__BC(d,s,151) \
__BC(d,s,152) \
__BC(d,s,153) \
__BC(d,s,154) \
__BC(d,s,155) \
__BC(d,s,156) \
__BC(d,s,157) \
__BC(d,s,158) \
__BC(d,s,159) \
__BC(d,s,160) \
__BC(d,s,161) \
__BC(d,s,162) \
__BC(d,s,163) \
__BC(d,s,164) \
__BC(d,s,165) \
__BC(d,s,166) \
__BC(d,s,167) \
__BC(d,s,168) \
__BC(d,s,169) \
__BC(d,s,170) \
__BC(d,s,171) \
__BC(d,s,172) \
__BC(d,s,173) \
__BC(d,s,174) \
__BC(d,s,175) \
__BC(d,s,176) \
__BC(d,s,177) \
__BC(d,s,178) \
__BC(d,s,179) \
__BC(d,s,180) \
__BC(d,s,181) \
__BC(d,s,182) \
__BC(d,s,183) \
__BC(d,s,184) \
__BC(d,s,185) \
__BC(d,s,186) \
__BC(d,s,187) \
__BC(d,s,188) \
__BC(d,s,189) \
__BC(d,s,190) \
__BC(d,s,191) \
__BC(d,s,192) \
__BC(d,s,193) \
__BC(d,s,194) \
__BC(d,s,195) \
__BC(d,s,196) \
__BC(d,s,197) \
__BC(d,s,198) \
__BC(d,s,199) \
__BC(d,s,200) \
__BC(d,s,201) \
__BC(d,s,202) \
__BC(d,s,203) \
__BC(d,s,204) \
__BC(d,s,205) \
__BC(d,s,206) \
__BC(d,s,207) \
__BC(d,s,208) \
__BC(d,s,209) \
__BC(d,s,210) \
__BC(d,s,211) \
__BC(d,s,212) \
__BC(d,s,213) \
__BC(d,s,214) \
__BC(d,s,215) \
__BC(d,s,216) \
__BC(d,s,217) \
__BC(d,s,218) \
__BC(d,s,219) \
__BC(d,s,220) \
__BC(d,s,221) \
__BC(d,s,222) \
__BC(d,s,223) \
__BC(d,s,224) \
__BC(d,s,225) \
__BC(d,s,226) \
__BC(d,s,227) \
__BC(d,s,228) \
__BC(d,s,229) \
__BC(d,s,230) \
__BC(d,s,231) \
__BC(d,s,232) \
__BC(d,s,233) \
__BC(d,s,234) \
__BC(d,s,235) \
__BC(d,s,236) \
__BC(d,s,237) \
__BC(d,s,238) \
__BC(d,s,239) \
__BC(d,s,240) \
__BC(d,s,241) \
__BC(d,s,242) \
__BC(d,s,243) \
__BC(d,s,244) \
__BC(d,s,245) \
__BC(d,s,246) \
__BC(d,s,247) \
__BC(d,s,248) \
__BC(d,s,249) \
__BC(d,s,250) \
__BC(d,s,251) \
__BC(d,s,252) \
__BC(d,s,253) \
__BC(d,s,254) \
__BC(d,s,255) \
__BC(d,s,256) \
__BC(d,s,257) \
__BC(d,s,258) \
__BC(d,s,259) \
__BC(d,s,260) \
__BC(d,s,261) \
__BC(d,s,262) \
__BC(d,s,263) \
__BC(d,s,264) \
__BC(d,s,265) \
__BC(d,s,266) \
__BC(d,s,267) \
__BC(d,s,268) \
__BC(d,s,269) \
__BC(d,s,270) \
__BC(d,s,271) \
__BC(d,s,272) \
__BC(d,s,273) \
__BC(d,s,274) \
__BC(d,s,275) \
__BC(d,s,276) \
__BC(d,s,277) \
__BC(d,s,278) \
__BC(d,s,279) \
__BC(d,s,280) \
__BC(d,s,281) \
__BC(d,s,282) \
__BC(d,s,283) \
__BC(d,s,284) \
__BC(d,s,285) \
__BC(d,s,286) \
__BC(d,s,287) \
__BC(d,s,288) \
__BC(d,s,289) \
__BC(d,s,290) \
__BC(d,s,291) \
__BC(d,s,292) \
__BC(d,s,293) \
__BC(d,s,294) \
__BC(d,s,295) \
__BC(d,s,296) \
__BC(d,s,297) \
__BC(d,s,298) \
__BC(d,s,299) \
__BC(d,s,300) \
__BC(d,s,301) \
__BC(d,s,302) \
__BC(d,s,303) \
__BC(d,s,304) \
__BC(d,s,305) \
__BC(d,s,306) \
__BC(d,s,307) \
__BC(d,s,308) \
__BC(d,s,309) \
__BC(d,s,310) \
__BC(d,s,311) \
__BC(d,s,312) \
__BC(d,s,313) \
__BC(d,s,314) \
__BC(d,s,315) \
__BC(d,s,316) \
__BC(d,s,317) \
__BC(d,s,318) \
__BC(d,s,319) \
__BC(d,s,320) \
__BC(d,s,321) \
__BC(d,s,322) \
__BC(d,s,323) \
__BC(d,s,324) \
__BC(d,s,325) \
__BC(d,s,326) \
__BC(d,s,327) \
__BC(d,s,328) \
__BC(d,s,329) \
__BC(d,s,330) \
__BC(d,s,331) \
__BC(d,s,332) \
__BC(d,s,333) \
__BC(d,s,334) \
__BC(d,s,335) \
__BC(d,s,336) \
__BC(d,s,337) \
__BC(d,s,338) \
__BC(d,s,339) \
__BC(d,s,340) \
__BC(d,s,341) \
__BC(d,s,342) \
__BC(d,s,343) \
__BC(d,s,344) \
__BC(d,s,345) \
__BC(d,s,346) \
__BC(d,s,347) \
__BC(d,s,348) \
__BC(d,s,349) \
__BC(d,s,350) \
__BC(d,s,351) \
__BC(d,s,352) \
__BC(d,s,353) \
__BC(d,s,354) \
__BC(d,s,355) \
__BC(d,s,356) \
__BC(d,s,357) \
__BC(d,s,358) \
__BC(d,s,359) \
__BC(d,s,360) \
__BC(d,s,361) \
__BC(d,s,362) \
__BC(d,s,363) \
__BC(d,s,364) \
__BC(d,s,365) \
__BC(d,s,366) \
__BC(d,s,367) \
__BC(d,s,368) \
__BC(d,s,369) \
__BC(d,s,370) \
__BC(d,s,371) \
__BC(d,s,372) \
__BC(d,s,373) \
__BC(d,s,374) \
__BC(d,s,375) \
__BC(d,s,376) \
__BC(d,s,377) \
__BC(d,s,378) \
__BC(d,s,379) \
__BC(d,s,380) \
__BC(d,s,381) \
__BC(d,s,382) \
__BC(d,s,383) \
__BC(d,s,384) \
__BC(d,s,385) \
__BC(d,s,386) \
__BC(d,s,387) \
__BC(d,s,388) \
__BC(d,s,389) \
__BC(d,s,390) \
__BC(d,s,391) \
__BC(d,s,392) \
__BC(d,s,393) \
__BC(d,s,394) \
__BC(d,s,395) \
__BC(d,s,396) \
__BC(d,s,397) \
__BC(d,s,398) \
__BC(d,s,399) \
__BC(d,s,400) \
__BC(d,s,401) \
__BC(d,s,402) \
__BC(d,s,403) \
__BC(d,s,404) \
__BC(d,s,405) \
__BC(d,s,406) \
__BC(d,s,407) \
__BC(d,s,408) \
__BC(d,s,409) \
__BC(d,s,410) \
__BC(d,s,411) \
__BC(d,s,412) \
__BC(d,s,413) \
__BC(d,s,414) \
__BC(d,s,415) \
__BC(d,s,416) \
__BC(d,s,417) \
__BC(d,s,418) \
__BC(d,s,419) \
__BC(d,s,420) \
__BC(d,s,421) \
__BC(d,s,422) \
__BC(d,s,423) \
__BC(d,s,424) \
__BC(d,s,425) \
__BC(d,s,426) \
__BC(d,s,427) \
__BC(d,s,428) \
__BC(d,s,429) \
__BC(d,s,430) \
__BC(d,s,431) \
__BC(d,s,432) \
__BC(d,s,433) \
__BC(d,s,434) \
__BC(d,s,435) \
__BC(d,s,436) \
__BC(d,s,437) \
__BC(d,s,438) \
__BC(d,s,439) \
__BC(d,s,440) \
__BC(d,s,441) \
__BC(d,s,442) \
__BC(d,s,443) \
__BC(d,s,444) \
__BC(d,s,445) \
__BC(d,s,446) \
__BC(d,s,447) \
__BC(d,s,448) \
__BC(d,s,449) \
__BC(d,s,450) \
__BC(d,s,451) \
__BC(d,s,452) \
__BC(d,s,453) \
__BC(d,s,454) \
__BC(d,s,455) \
__BC(d,s,456) \
__BC(d,s,457) \
__BC(d,s,458) \
__BC(d,s,459) \
__BC(d,s,460) \
__BC(d,s,461) \
__BC(d,s,462) \
__BC(d,s,463) \
__BC(d,s,464) \
__BC(d,s,465) \
__BC(d,s,466) \
__BC(d,s,467) \
__BC(d,s,468) \
__BC(d,s,469) \
__BC(d,s,470) \
__BC(d,s,471) \
__BC(d,s,472) \
__BC(d,s,473) \
__BC(d,s,474) \
__BC(d,s,475) \
__BC(d,s,476) \
__BC(d,s,477) \
__BC(d,s,478) \
__BC(d,s,479) \
__BC(d,s,480) \
__BC(d,s,481) \
__BC(d,s,482) \
__BC(d,s,483) \
__BC(d,s,484) \
__BC(d,s,485) \
__BC(d,s,486) \
__BC(d,s,487) \
__BC(d,s,488) \
__BC(d,s,489) \
__BC(d,s,490) \
__BC(d,s,491) \
__BC(d,s,492) \
__BC(d,s,493) \
__BC(d,s,494) \
__BC(d,s,495) \
__BC(d,s,496) \
__BC(d,s,497) \
__BC(d,s,498) \
__BC(d,s,499) \
__BC(d,s,500) \
__BC(d,s,501) \
__BC(d,s,502) \
__BC(d,s,503) \
__BC(d,s,504) \
__BC(d,s,505) \
__BC(d,s,506) \
__BC(d,s,507) \
__BC(d,s,508) \
__BC(d,s,509) \
__BC(d,s,510) \
__BC(d,s,511) \
__BC(d,s,512) \
__BC(d,s,513) \
__BC(d,s,514) \
__BC(d,s,515) \
__BC(d,s,516) \
__BC(d,s,517) \
__BC(d,s,518) \
__BC(d,s,519) \
__BC(d,s,520) \
__BC(d,s,521) \
__BC(d,s,522) \
__BC(d,s,523) \
__BC(d,s,524) \
__BC(d,s,525) \
__BC(d,s,526) \
__BC(d,s,527) \
__BC(d,s,528) \
__BC(d,s,529) \
__BC(d,s,530) \
__BC(d,s,531) \
__BC(d,s,532) \
__BC(d,s,533) \
__BC(d,s,534) \
__BC(d,s,535) \
__BC(d,s,536) \
__BC(d,s,537) \
__BC(d,s,538) \
__BC(d,s,539) \
__BC(d,s,540) \
__BC(d,s,541) \
__BC(d,s,542) \
__BC(d,s,543) \
__BC(d,s,544) \
__BC(d,s,545) \
__BC(d,s,546) \
__BC(d,s,547) \
__BC(d,s,548) \
__BC(d,s,549) \
__BC(d,s,550) \
__BC(d,s,551) \
__BC(d,s,552) \
__BC(d,s,553) \
__BC(d,s,554) \
__BC(d,s,555) \
__BC(d,s,556) \
__BC(d,s,557) \
__BC(d,s,558) \
__BC(d,s,559) \
__BC(d,s,560) \
__BC(d,s,561) \
__BC(d,s,562) \
__BC(d,s,563) \
__BC(d,s,564) \
__BC(d,s,565) \
__BC(d,s,566) \
__BC(d,s,567) \
__BC(d,s,568) \
__BC(d,s,569) \
__BC(d,s,570) \
__BC(d,s,571) \
__BC(d,s,572) \
__BC(d,s,573) \
__BC(d,s,574) \
__BC(d,s,575) \
__BC(d,s,576) \
__BC(d,s,577) \
__BC(d,s,578) \
__BC(d,s,579) \
__BC(d,s,580) \
__BC(d,s,581) \
__BC(d,s,582) \
__BC(d,s,583) \
__BC(d,s,584) \
__BC(d,s,585) \
__BC(d,s,586) \
__BC(d,s,587) \
__BC(d,s,588) \
__BC(d,s,589) \
__BC(d,s,590) \
__BC(d,s,591) \
__BC(d,s,592) \
__BC(d,s,593) \
__BC(d,s,594) \
__BC(d,s,595) \
__BC(d,s,596) \
__BC(d,s,597) \
__BC(d,s,598) \
__BC(d,s,599) \
__BC(d,s,600) \
__BC(d,s,601) \
__BC(d,s,602) \
__BC(d,s,603) \
__BC(d,s,604) \
__BC(d,s,605) \
__BC(d,s,606) \
__BC(d,s,607) \
__BC(d,s,608) \
__BC(d,s,609) \
__BC(d,s,610) \
__BC(d,s,611) \
__BC(d,s,612) \
__BC(d,s,613) \
__BC(d,s,614) \
__BC(d,s,615) \
__BC(d,s,616) \
__BC(d,s,617) \
__BC(d,s,618) \
__BC(d,s,619) \
__BC(d,s,620) \
__BC(d,s,621) \
__BC(d,s,622) \
__BC(d,s,623) \
__BC(d,s,624) \
__BC(d,s,625) \
__BC(d,s,626) \
__BC(d,s,627) \
__BC(d,s,628) \
__BC(d,s,629) \
__BC(d,s,630) \
__BC(d,s,631) \
__BC(d,s,632) \
__BC(d,s,633) \
__BC(d,s,634) \
__BC(d,s,635) \
__BC(d,s,636) \
__BC(d,s,637) \
__BC(d,s,638) \
__BC(d,s,639) \
__BC(d,s,640) \
__BC(d,s,641) \
__BC(d,s,642) \
__BC(d,s,643) \
__BC(d,s,644) \
__BC(d,s,645) \
__BC(d,s,646) \
__BC(d,s,647) \
__BC(d,s,648) \
__BC(d,s,649) \
__BC(d,s,650) \
__BC(d,s,651) \
__BC(d,s,652) \
__BC(d,s,653) \
__BC(d,s,654) \
__BC(d,s,655) \
__BC(d,s,656) \
__BC(d,s,657) \
__BC(d,s,658) \
__BC(d,s,659) \
__BC(d,s,660) \
__BC(d,s,661) \
__BC(d,s,662) \
__BC(d,s,663) \
__BC(d,s,664) \
__BC(d,s,665) \
__BC(d,s,666) \
__BC(d,s,667) \
__BC(d,s,668) \
__BC(d,s,669) \
__BC(d,s,670) \
__BC(d,s,671) \
__BC(d,s,672) \
__BC(d,s,673) \
__BC(d,s,674) \
__BC(d,s,675) \
__BC(d,s,676) \
__BC(d,s,677) \
__BC(d,s,678) \
__BC(d,s,679) \
__BC(d,s,680) \
__BC(d,s,681) \
__BC(d,s,682) \
__BC(d,s,683) \
__BC(d,s,684) \
__BC(d,s,685) \
__BC(d,s,686) \
__BC(d,s,687) \
__BC(d,s,688) \
__BC(d,s,689) \
__BC(d,s,690) \
__BC(d,s,691) \
__BC(d,s,692) \
__BC(d,s,693) \
__BC(d,s,694) \
__BC(d,s,695) \
__BC(d,s,696) \
__BC(d,s,697) \
__BC(d,s,698) \
__BC(d,s,699) \
__BC(d,s,700) \
__BC(d,s,701) \
__BC(d,s,702) \
__BC(d,s,703) \
__BC(d,s,704) \
__BC(d,s,705) \
__BC(d,s,706) \
__BC(d,s,707) \
__BC(d,s,708) \
__BC(d,s,709) \
__BC(d,s,710) \
__BC(d,s,711) \
__BC(d,s,712) \
__BC(d,s,713) \
__BC(d,s,714) \
__BC(d,s,715) \
__BC(d,s,716) \
__BC(d,s,717) \
__BC(d,s,718) \
__BC(d,s,719) \
__BC(d,s,720) \
__BC(d,s,721) \
__BC(d,s,722) \
__BC(d,s,723) \
__BC(d,s,724) \
__BC(d,s,725) \
__BC(d,s,726) \
__BC(d,s,727) \
__BC(d,s,728) \
__BC(d,s,729) \
__BC(d,s,730) \
__BC(d,s,731) \
__BC(d,s,732) \
__BC(d,s,733) \
__BC(d,s,734) \
__BC(d,s,735) \
__BC(d,s,736) \
__BC(d,s,737) \
__BC(d,s,738) \
__BC(d,s,739) \
__BC(d,s,740) \
__BC(d,s,741) \
__BC(d,s,742) \
__BC(d,s,743) \
__BC(d,s,744) \
__BC(d,s,745) \
__BC(d,s,746) \
__BC(d,s,747) \
__BC(d,s,748) \
__BC(d,s,749) \
__BC(d,s,750) \
__BC(d,s,751) \
__BC(d,s,752) \
__BC(d,s,753) \
__BC(d,s,754) \
__BC(d,s,755) \
__BC(d,s,756) \
__BC(d,s,757) \
__BC(d,s,758) \
__BC(d,s,759) \
__BC(d,s,760) \
__BC(d,s,761) \
__BC(d,s,762) \
__BC(d,s,763) \
__BC(d,s,764) \
__BC(d,s,765) \
__BC(d,s,766) \
__BC(d,s,767) \
__BC(d,s,768) \
__BC(d,s,769) \
__BC(d,s,770) \
__BC(d,s,771) \
__BC(d,s,772) \
__BC(d,s,773) \
__BC(d,s,774) \
__BC(d,s,775) \
__BC(d,s,776) \
__BC(d,s,777) \
__BC(d,s,778) \
__BC(d,s,779) \
__BC(d,s,780) \
__BC(d,s,781) \
__BC(d,s,782) \
__BC(d,s,783) \
__BC(d,s,784) \
__BC(d,s,785) \
__BC(d,s,786) \
__BC(d,s,787) \
__BC(d,s,788) \
__BC(d,s,789) \
__BC(d,s,790) \
__BC(d,s,791) \
__BC(d,s,792) \
__BC(d,s,793) \
__BC(d,s,794) \
__BC(d,s,795) \
__BC(d,s,796) \
__BC(d,s,797) \
__BC(d,s,798) \
__BC(d,s,799) \
__BC(d,s,800) \
__BC(d,s,801) \
__BC(d,s,802) \
__BC(d,s,803) \
__BC(d,s,804) \
__BC(d,s,805) \
__BC(d,s,806) \
__BC(d,s,807) \
__BC(d,s,808) \
__BC(d,s,809) \
__BC(d,s,810) \
__BC(d,s,811) \
__BC(d,s,812) \
__BC(d,s,813) \
__BC(d,s,814) \
__BC(d,s,815) \
__BC(d,s,816) \
__BC(d,s,817) \
__BC(d,s,818) \
__BC(d,s,819) \
__BC(d,s,820) \
__BC(d,s,821) \
__BC(d,s,822) \
__BC(d,s,823) \
__BC(d,s,824) \
__BC(d,s,825) \
__BC(d,s,826) \
__BC(d,s,827) \
__BC(d,s,828) \
__BC(d,s,829) \
__BC(d,s,830) \
__BC(d,s,831) \
__BC(d,s,832) \
__BC(d,s,833) \
__BC(d,s,834) \
__BC(d,s,835) \
__BC(d,s,836) \
__BC(d,s,837) \
__BC(d,s,838) \
__BC(d,s,839) \
__BC(d,s,840) \
__BC(d,s,841) \
__BC(d,s,842) \
__BC(d,s,843) \
__BC(d,s,844) \
__BC(d,s,845) \
__BC(d,s,846) \
__BC(d,s,847) \
__BC(d,s,848) \
__BC(d,s,849) \
__BC(d,s,850) \
__BC(d,s,851) \
__BC(d,s,852) \
__BC(d,s,853) \
__BC(d,s,854) \
__BC(d,s,855) \
__BC(d,s,856) \
__BC(d,s,857) \
__BC(d,s,858) \
__BC(d,s,859) \
__BC(d,s,860) \
__BC(d,s,861) \
__BC(d,s,862) \
__BC(d,s,863) \
__BC(d,s,864) \
__BC(d,s,865) \
__BC(d,s,866) \
__BC(d,s,867) \
__BC(d,s,868) \
__BC(d,s,869) \
__BC(d,s,870) \
__BC(d,s,871) \
__BC(d,s,872) \
__BC(d,s,873) \
__BC(d,s,874) \
__BC(d,s,875) \
__BC(d,s,876) \
__BC(d,s,877) \
__BC(d,s,878) \
__BC(d,s,879) \
__BC(d,s,880) \
__BC(d,s,881) \
__BC(d,s,882) \
__BC(d,s,883) \
__BC(d,s,884) \
__BC(d,s,885) \
__BC(d,s,886) \
__BC(d,s,887) \
__BC(d,s,888) \
__BC(d,s,889) \
__BC(d,s,890) \
__BC(d,s,891) \
__BC(d,s,892) \
__BC(d,s,893) \
__BC(d,s,894) \
__BC(d,s,895) \
__BC(d,s,896) \
__BC(d,s,897) \
__BC(d,s,898) \
__BC(d,s,899) \
__BC(d,s,900) \
__BC(d,s,901) \
__BC(d,s,902) \
__BC(d,s,903) \
__BC(d,s,904) \
__BC(d,s,905) \
__BC(d,s,906) \
__BC(d,s,907) \
__BC(d,s,908) \
__BC(d,s,909) \
__BC(d,s,910) \
__BC(d,s,911) \
__BC(d,s,912) \
__BC(d,s,913) \
__BC(d,s,914) \
__BC(d,s,915) \
__BC(d,s,916) \
__BC(d,s,917) \
__BC(d,s,918) \
__BC(d,s,919) \
__BC(d,s,920) \
__BC(d,s,921) \
__BC(d,s,922) \
__BC(d,s,923) \
__BC(d,s,924) \
__BC(d,s,925) \
__BC(d,s,926) \
__BC(d,s,927) \
__BC(d,s,928) \
__BC(d,s,929) \
__BC(d,s,930) \
__BC(d,s,931) \
__BC(d,s,932) \
__BC(d,s,933) \
__BC(d,s,934) \
__BC(d,s,935) \
__BC(d,s,936) \
__BC(d,s,937) \
__BC(d,s,938) \
__BC(d,s,939) \
__BC(d,s,940) \
__BC(d,s,941) \
__BC(d,s,942) \
__BC(d,s,943) \
__BC(d,s,944) \
__BC(d,s,945) \
__BC(d,s,946) \
__BC(d,s,947) \
__BC(d,s,948) \
__BC(d,s,949) \
__BC(d,s,950) \
__BC(d,s,951) \
__BC(d,s,952) \
__BC(d,s,953) \
__BC(d,s,954) \
__BC(d,s,955) \
__BC(d,s,956) \
__BC(d,s,957) \
__BC(d,s,958) \
__BC(d,s,959) \
__BC(d,s,960) \
__BC(d,s,961) \
__BC(d,s,962) \
__BC(d,s,963) \
__BC(d,s,964) \
__BC(d,s,965) \
__BC(d,s,966) \
__BC(d,s,967) \
__BC(d,s,968) \
__BC(d,s,969) \
__BC(d,s,970) \
__BC(d,s,971) \
__BC(d,s,972) \
__BC(d,s,973) \
__BC(d,s,974) \
__BC(d,s,975) \
__BC(d,s,976) \
__BC(d,s,977) \
__BC(d,s,978) \
__BC(d,s,979) \
__BC(d,s,980) \
__BC(d,s,981) \
__BC(d,s,982) \
__BC(d,s,983) \
__BC(d,s,984) \
__BC(d,s,985) \
__BC(d,s,986) \
__BC(d,s,987) \
__BC(d,s,988) \
__BC(d,s,989) \
__BC(d,s,990) \
__BC(d,s,991) \
__BC(d,s,992) \
__BC(d,s,993) \
__BC(d,s,994) \
__BC(d,s,995) \
__BC(d,s,996) \
__BC(d,s,997) \
__BC(d,s,998) \
__BC(d,s,999) \
__BC(d,s,1000) \
__BC(d,s,1001) \
__BC(d,s,1002) \
__BC(d,s,1003) \
__BC(d,s,1004) \
__BC(d,s,1005) \
__BC(d,s,1006) \
__BC(d,s,1007) \
__BC(d,s,1008) \
__BC(d,s,1009) \
__BC(d,s,1010) \
__BC(d,s,1011) \
__BC(d,s,1012) \
__BC(d,s,1013) \
__BC(d,s,1014) \
__BC(d,s,1015) \
__BC(d,s,1016) \
__BC(d,s,1017) \
__BC(d,s,1018) \
__BC(d,s,1019) \
__BC(d,s,1020) \
__BC(d,s,1021) \
__BC(d,s,1022) \
__BC(d,s,1023) 