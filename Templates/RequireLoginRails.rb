class HomesController < ApplicationController
  before_filter :authenticate_user!
  ## if you want spesific action for require authentication
  ## before_filter :authenticate_user!, :only => [:action1, :action2]
end
